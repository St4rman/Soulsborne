# Soulsborne
![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white) ![Unreal Engine](https://img.shields.io/badge/unrealengine-%23313131.svg?style=for-the-badge&logo=unrealengine&logoColor=white)

A combat system made to replicate soulsborne combat from games like Elden Ring, made in unreal engine 5 using its Gameplay Ability System. Feature rich with weapon system that ties in with attribute sets and abilities. 

Check out a devlog: https://youtu.be/aRxZbhFGuqA

https://github.com/user-attachments/assets/4c7c92a7-2fcd-41f8-91d8-4563d77ff796

Featurelist: 
* SoulsBorne Locomotion: Cam lock and directional dodging based on input and enemy positions
* Attribute based stats: Health, stamina, weapon attributes
* Ability system (GAS): Based attacks and Dodging to interface with the Attribute sets
* Weapons class: Modular weapon system allowing for data driven wepaon and inventory
* Boss AI: State based boss behavior using EQS pawn sensing and more

Current Status: Polishing

## How It's Made: 
Tech used: UE5, GAS, Niagara

### Gameplay Abilities and attributes
Like in elden ring, players have attributes like stamina, health. These are hooked up to wepaons and abilities, taking in and getting damaged, with passives allowing build up. This allows each weapon to ask for different stats, like heavy weapons swing slower and ask for more stamina, etc. This makes each weapon more unique. 

### Weapon System 
Weapons are categorised in many different categories, and making new weapons is easy. Theyre based on a base wepaon class which allows each weapon to define its own set of parameters and allows us to decouple the requirements and damage from the GAS and have the weapons define it. 

https://github.com/user-attachments/assets/db116ac1-2154-4284-9e6d-7f21b14e23b0

### Boss AI
Built using behavior trees, EQS, pawn sensing, custom queries, services and tasks. Bosses have randomness, but also pattern based behaviors. This allows them to feel learnable but also vary up their strats. 

https://github.com/user-attachments/assets/8122fa8b-8f66-41cd-983d-d8571355da27
