@startmindmap
skinparam mindmapDiagram {
    .html5 {
        BackgroundColor lightblue
    }
    .resources {
        BackgroundColor lightgreen
    }
    .features {
        BackgroundColor gray
    }
    .modern {
        BackgroundColor lightpink
    }
}

* HTML Learning 2025


** Core HTML5 Features <<features>>
*** New Semantic Elements
**** <article>
***** Blog posts
***** News articles
***** Forum posts
***** Product reviews
**** <section>
***** Chapter sections
***** Tabbed content
***** Page sections
***** Content grouping
**** <nav>
***** Main navigation
***** Breadcrumbs
***** Pagination
***** Table of contents
**** <header>
***** Page header
***** Article header
***** Section header
***** Logo & branding
**** <footer>
***** Copyright info
***** Contact details
***** Site links
***** Social media
**** <aside>
***** Sidebars
***** Related content
***** Advertisements
***** Widget areas
**** <main>
***** Primary content
***** Skip to main
***** Accessibility landmark
***** Single per page
**** <figure> & <figcaption>
***** Images with captions
***** Code snippets
***** Charts & graphs
***** Media content
**** <time>
***** Dates & timestamps
***** Machine readable
***** Event dates
***** Publication dates
*** Media Elements
**** <video>
***** Multiple formats (MP4, WebM, OGV)
***** Native controls
***** Autoplay policies
***** Poster images
***** Track subtitles
***** Responsive sizing
**** <audio>
***** Background music
***** Podcasts
***** Sound effects
***** Multiple formats
***** Controls customization
**** <picture>
***** Responsive images
***** Art direction
***** Format selection
***** Retina displays
*** Form Enhancements
**** New Input Types
***** email
****** Built-in validation
****** Mobile keyboards
****** Pattern matching
***** url
****** Protocol validation
****** Link verification
***** date/datetime-local
****** Native date pickers
****** Timezone handling
****** Min/max ranges
***** number
****** Numeric validation
****** Step increments
****** Range limits
***** range (slider)
****** Visual feedback
****** Custom styling
****** Value display
***** color
****** Color picker
****** Hex values
****** Accessibility
***** tel
****** Phone validation
****** Mobile optimization
***** search
****** Search functionality
****** Clear button
**** Form Validation
***** Required attribute
***** Pattern matching
***** Custom validation
***** Error messages
***** Real-time feedback
**** New Form Elements
***** <datalist>
****** Autocomplete options
****** Searchable dropdowns
***** <output>
****** Calculation results
****** Form feedback
***** <progress>
****** Loading indicators
****** Task completion
***** <meter>
****** Gauges & measurements
****** Score displays
*** Canvas & Graphics
**** <canvas> Element
***** 2D Drawing Context
****** Shapes & paths
****** Text rendering
****** Image manipulation
****** Animations
***** WebGL Support
****** 3D graphics
****** Hardware acceleration
****** Shaders
***** Performance Optimization
****** RequestAnimationFrame
****** Offscreen canvas
****** Worker threads
**** SVG Integration
***** Scalable graphics
***** CSS styling
***** Interactive elements
***** Animation support
*** Web Storage & APIs
**** localStorage
***** Persistent storage
***** 5-10MB limit
***** Same-origin policy
**** sessionStorage
***** Tab-specific storage
***** Session lifetime
**** IndexedDB
***** Large data storage
***** Structured data
***** Transaction support
**** Web APIs
***** Geolocation
***** Drag & Drop
***** File API
***** History API

left side

** Modern HTML Concepts <<modern>>
*** Web Components
**** Custom Elements
***** Define new HTML tags
***** Lifecycle callbacks
****** connectedCallback
****** disconnectedCallback
****** attributeChangedCallback
***** Element registration
****** customElements.define()
****** Naming conventions
***** Autonomous elements
***** Customized built-ins
**** Shadow DOM
***** Encapsulation
****** Style isolation
****** DOM isolation
****** Event isolation
***** Shadow root
****** Open vs closed
****** Slot distribution
***** CSS custom properties
****** Variable inheritance
****** Theme customization
**** HTML Templates
***** <template> element
****** Inert content
****** Cloning mechanism
****** Slot elements
***** <slot> element
****** Named slots
****** Fallback content
****** Slot distribution
***** Template instantiation
****** Document fragments
****** Performance benefits
**** Framework Integration
***** React compatibility
***** Vue.js support
***** Angular elements
***** Lit framework
*** Accessibility (A11Y)
**** ARIA Attributes
***** aria-label
****** Accessible names
****** Screen reader support
***** aria-describedby
****** Additional descriptions
****** Form associations
***** aria-expanded
****** Collapsible content
****** State indication
***** aria-hidden
****** Decorative content
****** Screen reader hiding
***** role attribute
****** Semantic roles
****** Landmark roles
****** Widget roles
**** Semantic Markup
***** Heading hierarchy
****** Logical structure
****** Skip navigation
***** Landmark elements
****** <main>, <nav>, <aside>
****** <header>, <footer>
***** List structures
****** Ordered/unordered
****** Definition lists
***** Table accessibility
****** Headers association
****** Caption elements
****** Summary attributes
**** Screen Reader Support
***** Alternative text
****** Image descriptions
****** Meaningful alt text
***** Focus management
****** Tab order
****** Focus indicators
****** Skip links
***** Keyboard navigation
****** All functionality accessible
****** Custom shortcuts
**** WCAG Guidelines
***** Level A compliance
****** Basic accessibility
***** Level AA compliance
****** Standard requirement
***** Level AAA compliance
****** Enhanced accessibility
***** Four principles
****** Perceivable
****** Operable
****** Understandable
****** Robust
*** Progressive Web Apps
**** Service Workers
***** Background processing
****** Push notifications
****** Background sync
***** Caching strategies
****** Cache first
****** Network first
****** Stale while revalidate
***** Offline functionality
****** Offline pages
****** Data synchronization
**** Web App Manifest
***** App metadata
****** Name & description
****** Icons & colors
****** Display modes
***** Installation prompts
****** Add to homescreen
****** Desktop installation
***** Splash screens
****** Launch experience
****** Branding consistency
**** Offline Functionality
***** Cache API
****** Resource caching
****** Version management
***** IndexedDB storage
****** Offline data
****** Sync queues
***** Background sync
****** Data synchronization
****** Network recovery
*** Performance Optimization
**** Critical Rendering Path
***** HTML parsing
****** DOM construction
****** Render blocking
***** CSS parsing
****** CSSOM construction
****** Render tree building
***** JavaScript execution
****** Parser blocking
****** Async/defer loading
**** Lazy Loading
***** Image lazy loading
****** Intersection Observer
****** loading="lazy"
****** Performance gains
***** Content lazy loading
****** Infinite scroll
****** On-demand loading
**** Resource Hints
***** <link rel="preload">
****** Critical resources
****** Font preloading
****** Image preloading
***** <link rel="prefetch">
****** Future navigation
****** Next page resources
***** <link rel="dns-prefetch">
****** DNS resolution
****** Third-party domains
***** <link rel="preconnect">
****** Connection establishment
****** Early handshake
**** Core Web Vitals
***** Largest Contentful Paint (LCP)
****** Loading performance
****** Main content rendering
***** First Input Delay (FID)
****** Interactivity measurement
****** Response time
***** Cumulative Layout Shift (CLS)
****** Visual stability
****** Layout shifts

** Learning Path <<resources>>
*** Beginner Level
**** HTML Fundamentals
***** Document Structure
****** DOCTYPE declaration
****** HTML root element
****** Head section
******* Meta tags
******* Title element
******* Link elements
****** Body section
******* Content organization
***** Elements & Tags
****** Opening/closing tags
****** Self-closing tags
****** Nested elements
****** Tag syntax rules
***** Attributes
****** Global attributes
******* id, class, style
******* data-* attributes
******* title, lang
****** Element-specific attributes
****** Boolean attributes
****** Attribute values
**** Text & Content
***** Headings (h1-h6)
****** Hierarchy importance
****** SEO considerations
****** Accessibility structure
***** Paragraphs & Line breaks
****** <p> element
****** <br> element
****** <hr> element
***** Text Formatting
****** <strong> vs <b>
****** <em> vs <i>
****** <mark>, <small>
****** <sub>, <sup>
***** Lists
****** Unordered lists (<ul>)
****** Ordered lists (<ol>)
****** Description lists (<dl>)
****** Nested lists
**** Links & Navigation
***** Anchor elements (<a>)
****** href attribute
****** target attribute
****** rel attribute
***** Link types
****** Internal links
****** External links
****** Email links
****** Phone links
***** Navigation patterns
****** Main navigation
****** Breadcrumbs
****** Pagination
**** Images & Media
***** Image elements
****** <img> attributes
****** alt text importance
****** Responsive images
***** Figure elements
****** <figure> & <figcaption>
****** Image descriptions
*** Intermediate Level
**** Forms & Input
***** Form structure
****** <form> element
****** Action & method
****** Fieldset & legend
***** Input elements
****** Text inputs
****** Checkboxes & radio
****** Select dropdowns
****** Textarea elements
***** Form validation
****** HTML5 validation
****** Custom validation
****** Error handling
***** Labels & accessibility
****** Explicit labeling
****** Implicit labeling
****** ARIA labels
**** Tables & Data
***** Table structure
****** <table>, <thead>, <tbody>
****** <tr>, <th>, <td>
****** <caption> element
***** Table accessibility
****** Headers association
****** Scope attributes
****** Summary information
***** Responsive tables
****** Horizontal scrolling
****** Stacked layouts
**** Semantic HTML5
***** Document outline
****** Logical structure
****** Heading levels
***** Content sectioning
****** Article vs section
****** Aside usage
****** Navigation landmarks
***** Microdata
****** Schema.org
****** Structured data
****** SEO benefits
**** CSS Integration
***** External stylesheets
****** Link elements
****** Media queries
***** Internal styles
****** <style> element
****** Scoped styles
***** Inline styles
****** Style attribute
****** Performance impact
*** Advanced Level
**** Web Components Development
***** Custom element creation
****** Element definition
****** Lifecycle management
****** Property/attribute sync
***** Shadow DOM implementation
****** Encapsulation strategies
****** Style inheritance
****** Event handling
***** Template systems
****** HTML templates
****** Slot distribution
****** Dynamic content
**** Performance Optimization
***** Loading strategies
****** Critical resources
****** Non-critical deferral
****** Progressive enhancement
***** Image optimization
****** Format selection
****** Compression
****** Lazy loading
***** Code splitting
****** Module bundling
****** Dynamic imports
****** Tree shaking
**** Advanced Accessibility
***** Complex interactions
****** Custom controls
****** Keyboard handling
****** Focus management
***** ARIA patterns
****** Live regions
****** Complex widgets
****** State management
***** Testing accessibility
****** Automated testing
****** Manual testing
****** Screen reader testing
**** SEO & Standards
***** Structured data
****** JSON-LD
****** Microdata
****** RDFa
***** Meta optimization
****** Open Graph
****** Twitter Cards
****** Schema markup
***** Core Web Vitals
****** Performance metrics
****** User experience
****** Google rankings



** Tools & Environment <<resources>>

*** Browser DevTools
**** Element Inspector
**** Console Debugging
**** Performance Profiling
*** Validation Tools
**** W3C Markup Validator
**** Accessibility Checkers
**** SEO Analyzers
*** Build Tools
**** Vite
**** Webpack
**** Parcel

@endmindmap