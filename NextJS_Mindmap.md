@startmindmap
<style>
mindmapDiagram {
    .getting_started {
        BackgroundColor lightblue
    }
    .app_router {
        BackgroundColor lightgreen
    }
    .pages_router {
        BackgroundColor lightyellow
    }
    .rendering {
        BackgroundColor lightcoral
    }
    .optimization {
        BackgroundColor lightpink
    }
    .deployment {
        BackgroundColor lightcyan
    }
    .advanced {
        BackgroundColor lavender
    }
}
</style>

* **Next.js 15.2** <<getting_started>>
** **Getting Started** <<getting_started>>
*** Installation
**** npx create-next-app@latest my-app
**** npm install next@latest react@latest react-dom@latest
**** Manual setup: package.json scripts
**** TypeScript: --typescript flag
*** Project Structure
**** app/ (App Router - Default)
***** page.tsx/jsx (Route component)
***** layout.tsx/jsx (Shared UI)
***** loading.tsx/jsx (Loading states)
***** error.tsx/jsx (Error boundaries)
***** not-found.tsx/jsx (404 pages)
***** route.tsx/jsx (API handlers)
**** pages/ (Pages Router - Legacy)
***** index.js (Home route)
***** _app.js (Custom App)
***** _document.js (HTML structure)
***** api/ (API routes)
**** public/ (Static Assets)
***** images, icons, robots.txt
***** Direct URL access: /public/image.png → /image.png
**** next.config.js (Configuration)
***** Build settings
***** Redirects & rewrites
***** Environment variables
**** package.json (Scripts & Dependencies)
***** dev, build, start, lint

** **App Router (Recommended)** <<app_router>>
*** File-based Routing
**** app/page.js (Home page: /)
**** app/about/page.js (Static: /about)
**** app/blog/[slug]/page.js (Dynamic: /blog/post-1)
**** app/shop/[...slug]/page.js (Catch-all: /shop/a/b/c)
**** app/blog/[[...slug]]/page.js (Optional catch-all)
*** Layouts & Templates
**** app/layout.js (Root layout - Required)
***** HTML, body tags
***** Global styles & fonts
***** Shared components (nav, footer)
**** app/dashboard/layout.js (Nested layouts)
***** Route group specific UI
***** Persistent between navigations
**** app/template.js (Templates)
***** Re-render on navigation
***** Animation & state reset
*** Loading & Error Handling
**** app/loading.js (Loading UI)
***** Instant loading states
***** Suspense boundaries
***** Skeleton components
**** app/error.js (Error boundaries)
***** Client component required
***** Error recovery functions
***** Development error overlay
**** app/not-found.js (Custom 404)
***** notFound() function trigger
***** Custom styling & actions
**** app/global-error.js (Root error boundary)
*** Route Groups & Organization
**** app/(marketing)/page.js (URL: /)
**** app/(shop)/page.js (URL: /)
**** app/(auth)/login/page.js (URL: /login)
**** Group routes without URL impact
**** Organize layouts & components
*** Parallel & Intercepting Routes
**** app/@modal/(.)photo/[id]/page.js
**** app/@sidebar/settings/page.js
**** Multiple components same URL
**** Modal overlays & complex UIs

** **Pages Router (Legacy)** <<pages_router>>
*** File-based Routing
**** pages/index.js
**** pages/about.js
**** pages/[id].js
*** API Routes
**** pages/api/hello.js
**** pages/api/users/[id].js
*** Custom App & Document
**** pages/_app.js
**** pages/_document.js

** **Rendering Methods** <<rendering>>
*** Server Components (Default)
**** Async components support
***** await fetch() directly
***** Database queries
***** File system access
**** Zero client-side JavaScript
**** SEO friendly
**** Fast initial load
**** Security: API keys hidden
*** Client Components
**** 'use client' directive (top of file)
**** Interactive elements
***** onClick, onChange handlers
***** useState, useEffect hooks
***** Browser APIs (localStorage, etc.)
**** Hydration on client
**** Component boundary: children can be server
*** Static Site Generation (SSG)
**** generateStaticParams() function
***** Return array of params
***** Build-time path generation
**** Static HTML at build time
**** CDN cacheable
**** Best performance
*** Server-Side Rendering (SSR)
**** Dynamic rendering per request
**** Real-time data
**** User-specific content
**** Slower than static
*** Incremental Static Regeneration (ISR)
**** revalidate: 60 (seconds)
**** On-demand revalidation
***** revalidatePath('/posts')
***** revalidateTag('posts')
**** Best of static + dynamic
*** Streaming & Suspense
**** Partial page rendering
**** Progressive enhancement
**** loading.js automatic suspense
**** Manual <Suspense> boundaries

** **Data Fetching** <<app_router>>
*** Native fetch() API
**** Built-in caching & deduplication
***** Same request = same response
***** Automatic request deduplication
**** Cache options
***** { cache: 'force-cache' } (default)
***** { cache: 'no-store' } (always fresh)
***** { next: { revalidate: 60 } }
**** Error handling with try/catch
*** Database Integration
**** Server Components direct access
***** No API route needed
***** Database queries in components
**** Popular ORMs
***** Prisma: prisma.user.findMany()
***** Drizzle: db.select().from(users)
***** Sequelize, TypeORM support
**** Connection pooling
**** Environment variables for credentials
*** External APIs & Services
**** REST APIs
***** fetch() with proper headers
***** Authentication tokens
***** Error handling & retries
**** GraphQL
***** Apollo Client
***** urql, Relay
**** Third-party services
***** Stripe, SendGrid
***** Firebase, Supabase
*** Client-side Fetching
**** SWR (Vercel's library)
***** Caching, revalidation
***** Real-time updates
**** React Query/TanStack Query
***** Complex state management
***** Optimistic updates
**** useEffect + fetch (basic)
*** Caching Strategies
**** Time-based revalidation
**** Tag-based invalidation
**** Manual cache clearing
**** CDN & Edge caching

** **Styling** <<optimization>>
*** CSS Modules
**** styles.module.css
**** Scoped styles
*** Tailwind CSS
**** Built-in support
**** JIT compilation
*** Styled Components
**** CSS-in-JS
**** Server-side rendering
*** Sass/SCSS
**** Built-in support
**** Global & modular

** **Performance & Optimization** <<optimization>>
*** Image Optimization
**** next/image component
**** Automatic WebP/AVIF
**** Lazy loading
*** Font Optimization
**** next/font
**** Google Fonts
**** Local fonts
*** Bundle Analysis
**** @next/bundle-analyzer
**** Tree shaking
*** Code Splitting
**** Automatic splitting
**** Dynamic imports
*** Caching
**** React 19 improvements
**** Turbopack in dev

** **Advanced Features** <<advanced>>
*** Middleware
**** middleware.js in root directory
**** Edge runtime execution
**** Request/response manipulation
***** URL rewrites
***** Header modifications
***** Authentication checks
**** Geolocation & A/B testing
**** Rate limiting
*** Internationalization (i18n)
**** Built-in i18n routing
***** /en/about, /fr/about
***** Automatic locale detection
**** next-intl library
***** Type-safe translations
***** Pluralization rules
**** SEO optimization
***** hreflang tags
***** Localized sitemaps
*** Authentication & Authorization
**** NextAuth.js (Auth.js)
***** OAuth providers (Google, GitHub)
***** Database sessions
***** JWT tokens
**** Third-party services
***** Clerk: User management
***** Auth0: Enterprise auth
***** Supabase Auth
**** Custom authentication
***** JWT verification
***** Session management
*** Database & ORM Integration
**** Prisma setup
***** Schema definition
***** Type generation
***** Migration system
**** Connection strategies
***** Serverless-friendly
***** Connection pooling
***** Edge runtime compatibility
*** Testing Strategies
**** Unit Testing
***** Jest configuration
***** React Testing Library
***** Component testing
**** Integration Testing
***** API route testing
***** Database mocking
**** End-to-end Testing
***** Playwright setup
***** Cypress integration
***** Visual regression testing
*** TypeScript Integration
**** Built-in TypeScript support
**** Type-safe APIs
***** Typed route handlers
***** Form data validation
**** Custom type definitions
**** Strict mode configuration

** **Deployment** <<deployment>>
*** Vercel (Recommended)
**** Zero-config deployment
**** Preview deployments
**** Edge functions
*** Self-hosting
**** Docker containers
**** Node.js server
**** Static export
*** Other Platforms
**** Netlify, AWS
**** Railway, DigitalOcean



-- **Key Concepts**
--- React 19 Support
---- Server Components by default
---- Concurrent rendering
---- Automatic batching
---- Suspense improvements
---- New hooks: useOptimistic, useFormStatus
--- Turbopack (Dev Mode)
---- Rust-based bundler
---- 10x faster than Webpack
---- Hot Module Replacement
---- Incremental compilation
---- Better error messages
--- File Conventions
---- Special file names
***** page.js: Route component
***** layout.js: Shared UI wrapper
***** loading.js: Loading states
***** error.js: Error boundaries
***** not-found.js: 404 pages
***** route.js: API endpoints
---- Reserved naming patterns
***** [param]: Dynamic routes
***** [...param]: Catch-all routes
***** [[...param]]: Optional catch-all
***** (folder): Route groups
***** @folder: Parallel routes
--- Configuration Deep Dive
---- next.config.js options
***** experimental features
***** webpack customization
***** redirects & rewrites
***** headers & CORS
***** environment variables
---- Environment variables
***** .env.local (local development)
***** .env.production (production)
***** NEXT_PUBLIC_ prefix (client-side)
***** Process.env access patterns

-- **Common Patterns & Best Practices**
--- Authentication Flows
---- Protected routes
***** middleware.js checks
***** Redirect unauthenticated users
---- Session management
***** Server-side validation
***** Client-side state sync
---- Role-based access
***** User permissions
***** Route protection
--- API Integration Patterns
---- Server Actions
***** Form submissions
***** Database mutations
***** 'use server' directive
---- REST API design
***** pages/api structure
***** HTTP methods handling
***** Error responses
---- GraphQL setup
***** Apollo Server integration
***** Type generation
--- State Management
---- Server state vs Client state
---- React Context patterns
---- Zustand for global state
---- Form state management
***** react-hook-form
***** Server Actions
--- Error Handling Strategies
---- Error boundaries
---- Try/catch patterns
---- User feedback systems
---- Logging & monitoring
--- SEO Optimization
---- Metadata API
***** generateMetadata()
***** Static & dynamic meta tags
---- Structured data
---- Open Graph tags
---- XML sitemaps
--- Progressive Web App (PWA)
---- Service worker setup
---- Manifest configuration
---- Offline functionality
---- Push notifications

@endmindmap