# Unreal Engine C++ Learning Projects

A collection of foundational Unreal Engine / C++ projects, built while completing a comprehensive Unreal Engine C++ course. Each project practices a specific set of mechanics, engine features, and C++ programming concepts.

> **Note:** These are strictly course-following exercises designed to learn the engine.
> For my original, self-designed game architecture, see **[NightToll](https://github.com/Vendra35/NightToll)** — a "Papers, Please"-style inspection game built from scratch. 
> Also, check out my Europa Universalis V modding projects with thousands of active subscribers: **[The Prussian Destiny](https://github.com/Vendra35/The-Prussian-Destiny)**, **[REAI: Rational Empire AI](https://github.com/Vendra35/REAI-Rational-Empire-AI)** and **[REAI: Army & Manpower Overhaul](https://github.com/Vendra35/REAI-AI-Army-Manpower-Overhaul)**.

## The Projects

### 1. ShooterSam
A robust third-person shooter built on Unreal's Third Person template. This project covers a complete combat, animation, and AI pipeline:
*   **Animation Pipeline:** Implemented Animation Blueprints, Skeletal Animations, and Blend Spaces. Integrated Animation State Machines, additive animations, and airborne state calculations.
*   **Combat Mechanics:** Created a custom Gun Actor with socket attachment and spawning logic. Programmed bullet line traces, crosshair HUDs, gun particle effects, sound cues, and bullet damage.
*   **Character Systems:** Built health management, health bar HUDs, and dynamic death animations.
*   **Artificial Intelligence:** Developed AI Controllers with line-of-sight and NavMesh movement. Built complex Behavior Trees using Blackboards, custom C++ Tasks (e.g., Shoot Task), Services, Decorators, and Selector Nodes.
*   **C++ Fundamentals:** Deep dive into function overloading, macros, protected members, virtual functions, and range-based for loops.

### 2. BattleBlaster
A top-down tank combat game focused on input mechanics and game loops.
*   **Gameplay:** Player tank controlled via input, facing off against enemy turrets that can actively detect the player.
*   **Combat:** Engineered a projectile firing system complete with health, damage, and destruction mechanics.
*   **Game Loop & Polish:** Implemented explicit win and lose conditions surfaced through the UI, polished with special effects including particles, sounds, and camera shake.

### 3. DungeonEscape
An escape-room style level built on the FPS template. Focuses heavily on environmental interaction and level design.
*   **Level Mechanics:** Coded gameplay elements including Movers, Triggers, Pressure Plates, and an Item System.
*   **Environment:** Setup a test level from scratch, learning Unreal's lighting system, asset importing, and level design fundamentals.

### 4. ObstacleAssault
The foundational project in the series. Core C++ and Unreal basics:
*   **Fundamentals:** Project creation and test level setup.
*   **Mechanics:** Introduction to basic C++ by programming independent platforms that move and rotate within the level.
*   **Design:** Imported assets to design a complete obstacle course.

## Tech Stack
- **Engine:** Unreal Engine 5
- **Language:** C++
- **IDE:** Visual Studio / VS Code

## Repository Contents
`Content/` folders (textures, meshes, and other large assets) are excluded from this repository to optimize size — only source code (`Source/`), configuration, and project files are tracked.