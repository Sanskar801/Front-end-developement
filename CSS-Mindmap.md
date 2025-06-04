@startmindmap

<style>
mindmapDiagram {
  BackgroundColor #1a202c
  node {
    BackgroundColor #2d3748
    LineColor #718096
    LineThickness 2.0
    RoundCorner 8
    Padding 8
    Margin 4
    FontSize 12
    FontColor #e2e8f0
    MaximumWidth 200
  }
  
  rootNode {
    BackgroundColor #4299e1
    FontColor white
    FontSize 16
    FontStyle bold
    LineThickness 3.0
    RoundCorner 12
    Shadowing 3.0
  }
  
  :depth(1) {
    BackgroundColor #805ad5
    FontColor white
    FontSize 14
    FontStyle bold
    RoundCorner 10
  }
  
  :depth(2) {
    BackgroundColor #9f7aea
    FontColor white
    FontSize 13
    RoundCorner 8
  }
  
  :depth(3) {
    BackgroundColor #f56565
    FontColor white
    FontSize 12
    RoundCorner 6
  }
  
  :depth(4) {
    BackgroundColor #fc8181
    FontColor white
    FontSize 11
    RoundCorner 4
  }
  
  .fundamentals {
    BackgroundColor #48bb78
    FontColor white
  }
  
  .modern {
    BackgroundColor #ed8936
    FontColor white
  }
  
  .advanced {
    BackgroundColor #38b2ac
    FontColor white
  }
  
  .tools {
    BackgroundColor #4fd1c7
    FontColor #1a202c
  }
  
  .ecosystem {
    BackgroundColor #ecc94b
    FontColor #1a202c
  }
  
  .practices {
    BackgroundColor #4a5568
    FontColor #e2e8f0
  }
}
</style>

* CSS Learning 2025
** Fundamentals
*** Syntax & Selectors
**** Basic Selectors
***** Universal selector (*)
***** Type selectors (h1, p, div)
***** Class selectors (.class-name)
***** ID selectors (#id-name)
***** Descendant combinator (space)
***** Child combinator (>)
***** Adjacent sibling (+)
***** General sibling (~)
**** Advanced Selectors
***** Attribute selectors [attr], [attr=value]
***** Pseudo-classes (:hover, :focus, :active)
***** :nth-child(), :nth-of-type()
***** :first-child, :last-child
***** :not() pseudo-class
***** :root pseudo-class
**** Pseudo-elements
***** ::before, ::after
***** ::first-line, ::first-letter
***** ::placeholder
***** ::selection
***** ::marker (list styling)
*** Box Model Deep Dive
**** Content Box
***** width, height properties
***** min-width, max-width
***** min-height, max-height
**** Padding
***** padding-top/right/bottom/left
***** padding shorthand
***** Percentage vs pixel values
**** Border
***** border-width, border-style
***** border-color, border-radius
***** border-image properties
***** outline vs border
**** Margin
***** margin-top/right/bottom/left
***** margin shorthand
***** Margin collapse behavior
***** auto margins for centering
**** Box-sizing
***** content-box (default)
***** border-box (recommended)
***** inherit, initial values
*** Positioning Systems
**** Static Positioning
***** Default flow behavior
***** Document normal flow
**** Relative Positioning
***** position: relative
***** top, right, bottom, left
***** Original space preserved
**** Absolute Positioning
***** position: absolute
***** Removed from normal flow
***** Positioned relative to parent
**** Fixed Positioning
***** position: fixed
***** Positioned relative to viewport
***** Stays during scroll
**** Sticky Positioning
***** position: sticky
***** Threshold-based behavior
***** top, left values as triggers
**** Z-index & Stacking
***** Stacking context creation
***** z-index numeric values
***** Layer management
*** Display Properties
**** Block Elements
***** display: block
***** Full width by default
***** Vertical stacking
***** Examples: div, p, h1-h6
**** Inline Elements
***** display: inline
***** Horizontal flow
***** No width/height control
***** Examples: span, a, strong
**** Inline-block
***** display: inline-block
***** Best of both worlds
***** Width/height controllable
**** None & Hidden
***** display: none (removes from DOM)
***** visibility: hidden (space preserved)
***** opacity: 0 (invisible but interactive)

** Modern Layout Systems
*** Flexbox Complete
**** Flex Container Properties
***** display: flex, inline-flex
***** flex-direction
****** row (default), column
****** row-reverse, column-reverse
***** flex-wrap
****** nowrap (default), wrap
****** wrap-reverse
***** flex-flow (shorthand)
***** justify-content
****** flex-start, flex-end, center
****** space-between, space-around
****** space-evenly
***** align-items
****** stretch (default), flex-start
****** flex-end, center, baseline
***** align-content
****** For multi-line flex containers
****** Same values as justify-content
***** gap, row-gap, column-gap
**** Flex Item Properties
***** flex-grow
****** Growth ratio (0 = no growth)
****** Positive numbers for expansion
***** flex-shrink
****** Shrink ratio (1 = default)
****** 0 prevents shrinking
***** flex-basis
****** Initial size before free space
****** auto, percentage, fixed values
***** flex shorthand
****** flex: grow shrink basis
****** Common values: 1, auto, none
***** align-self
****** Override container align-items
****** Individual item alignment
***** order
****** Visual reordering
****** Integer values (0 default)
*** CSS Grid Mastery
**** Grid Container Setup
***** display: grid, inline-grid
***** grid-template-columns
****** Fixed sizes (px, em, rem)
****** Flexible sizes (fr unit)
****** repeat() function
****** minmax() function
****** auto-fit vs auto-fill
***** grid-template-rows
****** Same syntax as columns
****** Implicit vs explicit rows
***** grid-template-areas
****** Named grid areas
****** Visual layout representation
***** grid-gap / gap
****** row-gap, column-gap
****** Shorthand syntax
***** justify-items, align-items
****** start, end, center, stretch
***** justify-content, align-content
****** For grid alignment in container
**** Grid Item Placement
***** grid-column
****** grid-column-start/end
****** Span keyword
****** Line numbers and names
***** grid-row
****** grid-row-start/end
****** Same syntax as columns
***** grid-area
****** Shorthand for all placement
****** Named area assignment
***** justify-self, align-self
****** Individual item alignment
**** Advanced Grid Features
***** Implicit Grid
****** grid-auto-columns/rows
****** grid-auto-flow
***** Subgrid (2024)
****** grid-template-columns: subgrid
****** Inherits parent grid lines
****** Better nested layouts
***** Grid Functions
****** repeat(), minmax()
****** fit-content()
****** min(), max(), clamp()

** Latest 2025 Features
*** Container Queries Revolution
**** @container Rule
***** Container-type: size, inline-size
***** Container-name for targeting
***** Size-based conditions
**** Query Syntax
***** @container (min-width: 300px)
***** Logical operators (and, or, not)
***** Multiple conditions
**** Advantages Over Media Queries
***** Component-based responsive design
***** Independent of viewport size
***** Better modular components
*** :has() Selector Power
**** Parent Selection
***** Select parent based on children
***** .card:has(.featured) syntax
**** Form State Handling
***** form:has(input:focus)
***** Conditional styling patterns
**** Complex Relationships
***** Sibling-aware selections
***** Multi-level conditions
**** Browser Support
***** 72.8% adoption rate
***** Progressive enhancement strategy
*** Native CSS Nesting
**** Syntax Rules
***** & parent selector reference
***** Nested selectors without &
***** @media nested in selectors
**** Benefits
***** No preprocessor dependency
***** Cleaner code organization
***** Better maintainability
**** Best Practices
***** Maximum 3-4 levels deep
***** Specific selectors first
***** Media queries at component level
*** View Transitions API
**** Smooth Page Navigation
***** view-transition-name property
***** ::view-transition pseudo-elements
**** Animation Control
***** Customizable transition effects
***** Duration and easing control
**** Browser Support
***** Progressive enhancement
***** Fallback strategies
*** Advanced Color Functions
**** New Color Spaces
***** oklch() for perceptual uniformity
***** lab() for scientific accuracy
***** hwb() hue-whiteness-blackness
**** color-mix() Function
***** Blend colors programmatically
***** Percentage-based mixing
***** Different color space mixing
**** Relative Color Syntax
***** from keyword usage
***** Dynamic color modifications

** Advanced Styling Techniques
*** Modern Typography
**** Variable Fonts
***** font-variation-settings
***** Multiple axes control
****** Weight, width, slant, optical size
***** Single file, multiple styles
**** Font Loading Strategies
***** font-display: swap, fallback
***** Font loading API
***** Performance optimization
**** Advanced Text Properties
***** text-wrap: balance, pretty
***** hanging-punctuation
***** font-optical-sizing: auto
***** text-decoration-thickness
**** Font Features
***** font-feature-settings
***** OpenType features
***** Ligatures, small-caps
*** Colors & Gradients Mastery
**** Color Theory Application
***** HSL for intuitive adjustments
***** Color harmony principles
***** Accessibility considerations
**** Advanced Gradients
***** Conic gradients
***** Multiple color stops
***** Gradient animations
***** Mesh gradients simulation
**** Color Manipulation
***** CSS custom properties for themes
***** Dynamic color calculations
***** Alpha channel control
*** Animation & Motion
**** CSS Transitions
***** transition-property specificity
***** transition-duration timing
***** transition-timing-function
****** cubic-bezier() custom curves
****** steps() for sprite animations
***** transition-delay for sequencing
**** CSS Animations
***** @keyframes rule creation
***** animation-name assignment
***** animation-duration, iteration-count
***** animation-direction: alternate
***** animation-fill-mode control
***** animation-play-state for control
**** Scroll-driven Animations
***** scroll-timeline property
***** view-timeline for element visibility
***** animation-timeline assignment
**** Performance Optimization
***** Transform and opacity preferred
***** will-change property usage
***** Hardware acceleration triggers
*** Filters & Visual Effects
**** Filter Functions
***** blur(), brightness(), contrast()
***** saturate(), hue-rotate()
***** drop-shadow() vs box-shadow
***** Multiple filter chaining
**** Backdrop Filters
***** backdrop-filter property
***** Frosted glass effects
***** Browser support considerations
**** CSS Masks
***** mask-image property
***** mask-mode, mask-repeat
***** Complex shape reveals
**** Clip Paths
***** Basic shapes (circle, ellipse)
***** Polygon() for custom shapes
***** SVG path integration

** Responsive Design Mastery
*** Media Query Strategies
**** Breakpoint Planning
***** Mobile-first approach
***** Content-based breakpoints
***** Device-agnostic thinking
**** Media Query Types
***** Screen, print, speech
***** Orientation queries
***** Hover capability detection
***** Pointer precision queries
**** Advanced Query Features
***** prefers-color-scheme
***** prefers-reduced-motion
***** prefers-contrast
***** forced-colors mode
*** Fluid Design Principles
**** Fluid Typography
***** clamp() function mastery
***** Viewport units (vw, vh, vmin, vmax)
***** Scalable font systems
**** Fluid Spacing
***** Dynamic margins and padding
***** Container-relative units
***** Proportional layouts
**** Fluid Grids
***** Percentage-based widths
***** Flexible grid systems
***** Auto-fit vs auto-fill
*** Modern Units System
**** Viewport Units
***** vw, vh for full viewport
***** vmin, vmax for responsive
***** lvh, svh, dvh (new units)
**** Container Units
***** cqw, cqh for container queries
***** cqi, cqb logical units
**** Logical Properties
***** margin-inline, margin-block
***** padding-inline-start/end
***** inset property shorthand

** CSS Variables & Functions
*** Custom Properties Deep Dive
**** Declaration & Usage
***** --property-name: value
***** var(--property-name, fallback)
***** Scope and inheritance rules
**** Dynamic Theming
***** Root-level color schemes
***** Component-level customization
***** Runtime theme switching
**** Advanced Patterns
***** CSS custom property cascading
***** Calculated custom properties
***** Custom property animations
*** CSS Functions Mastery
**** Mathematical Functions
***** calc() for dynamic calculations
***** min(), max() for constraints
***** clamp() for fluid scaling
***** abs(), sign(), mod() functions
**** Layout Functions
***** repeat() in grid
***** minmax() for flexible sizing
***** fit-content() for content-aware
**** Color Functions
***** rgb(), hsl(), hwb()
***** color-mix(), relative colors
***** Alpha channel manipulation

** Performance & Best Practices
*** CSS Optimization
**** File Size Reduction
***** Remove unused CSS
***** Minification strategies
***** Critical CSS extraction
***** CSS tree shaking
**** Loading Performance
***** CSS delivery optimization
***** Inline critical styles
***** Preload stylesheets
***** Font loading strategies
**** Runtime Performance
***** Avoid expensive properties
***** Minimize repaints/reflows
***** Use transform for animations
***** Layer creation strategies
*** Code Organization
**** CSS Methodologies
***** BEM (Block Element Modifier)
****** Naming conventions
****** Component isolation
***** SMACSS (Scalable & Modular)
****** Base, layout, module rules
***** ITCSS (Inverted Triangle)
****** Specificity management
**** Architecture Patterns
***** Component-based CSS
***** Utility-first approaches
***** CSS-in-JS considerations
*** Accessibility Integration
**** Focus Management
***** :focus-visible implementation
***** Custom focus indicators
***** Focus trap patterns
**** Screen Reader Support
***** Semantic HTML importance
***** ARIA attribute styling
***** Text alternatives for visuals
**** Motion Preferences
***** prefers-reduced-motion
***** Animation alternatives
***** Vestibular disorder considerations
**** Color Accessibility
***** Contrast ratio compliance
***** Color-blind considerations
***** High contrast mode support

** Testing & Debugging
*** Browser DevTools Mastery
**** Element Inspection
***** Computed styles analysis
***** Box model visualization
***** CSS cascade understanding
**** Layout Debugging
***** Flexbox inspector
***** Grid inspector
***** Layout shift identification
**** Performance Analysis
***** Paint timing
***** Layout thrashing detection
***** Memory usage monitoring
*** Cross-browser Testing
**** Browser Engine Differences
***** Webkit (Safari)
***** Blink (Chrome, Edge)
***** Gecko (Firefox)
**** Testing Strategies
***** Progressive enhancement
***** Graceful degradation
***** Feature detection
**** Compatibility Tools
***** Can I Use integration
***** Autoprefixer usage
***** Polyfill strategies

** Modern Trends 2025
*** Frameworks & Tools
**** CSS Frameworks
***** Tailwind CSS
***** Bootstrap 5
***** Bulma
**** Build Tools
***** PostCSS
***** Sass/SCSS
***** CSS Modules
**** Design Systems
***** Component libraries
***** Design tokens
***** Style guides

@endmindmap