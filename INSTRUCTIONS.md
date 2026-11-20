# Git and VS Code Team Activity: NightLight

In teams of 3 or 4 you will build a small Arduino night light together, using the Git workflow professional teams use: fork, clone, commit, pull, branch, pull request and merge. Everything is done in VS Code and on github.com, with no command line.

This file tells you what to do and when. [TASKS.md](TASKS.md) describes what each person builds. In VS Code, open either file and press `Ctrl+Shift+V` (Mac: `Cmd+Shift+V`) for an easy-to-read preview.

## The plan for today

By the end your team will have a NightLight sketch edited by every teammate, eight merged pull requests and one merge conflict that you resolved yourselves.

- **Project Manager (PM)**: Forks the template, invites teammates, reviews and merges pull requests on GitHub. Also does Tasks 4 and 8.
- **Developer A**: (Sensor) Tasks 1 and 5
- **Developer B**: (LED) Tasks 2 and 6
- **Developer C**: (Button) Tasks 3 and 7

### Outline

| | |
|---|---|
| **Lecture** | Intro to Git |
| Activity 1 | Fork, invite, clone |
| Activity 2 | Commit and pull relay |
| **Lecture** | branches and pull requests |
| Activity | Round 1 branches and pull requests |
| _Break_ |
| Activity 4 | Review, merge and pull |
| **Lecture** | Handling merge conflicts |
| Activity 5 | Round 2 and a conflict |
| Wrap-up |

Three team rules:

1. Pull before you start working.
2. After Activity 2, never commit to `main` directly. Work on your own branch.
3. Only the PM merges pull requests.

## Activity 1: Fork, invite, clone

Goal: every teammate has the team's repository open in VS Code.

**Project Manager**

1. Open the template link your instructor gave you and sign in to GitHub.
2. Click **Fork**, then **Create fork**. Keep the default name. The new repository now lives under your account. This is your team's repository.
3. In your fork, click **Settings**, then **Collaborators** in the left sidebar, then **Add people**. Enter each teammate's GitHub username and send the invitation.
4. Click the green **Code** button, choose the **HTTPS** tab and copy the address. Share it with your team. It must contain your username, not the instructor's.

**Developers**

1. Accept the invitation from your PM. Look for the email from GitHub, or open the invitation link your PM can send you. Until you accept, you cannot push changes.

**Everyone**

1. Open VS Code and press `Ctrl+Shift+P` (Mac: `Cmd+Shift+P`) to open the Command Palette.
2. Type `Git: Clone` and press Enter. Paste the URL to your team's repository and press Enter.
3. Choose a folder on your computer, then click **Open** when VS Code offers. Click **Yes, I trust the authors** if asked.

**Check:** the Explorer on the left shows `README.md`, `INSTRUCTIONS.md`, `TASKS.md` and a `NightLight` folder, and the bottom-left corner of VS Code shows `main`.

## Activity 2: Commit and pull relay

Goal: practice commit, push and pull on `main`. Go one at a time in this order: PM, Developer A, Developer B, Developer C. Each person adds their name to the README, then tells the next person "pushed". While you wait, open `NightLight/NightLight.ino` and read how the program is organized.

**On your turn**

1. **Pull first.** Click the Source Control icon on the left (or press `Ctrl+Shift+G`), click the `...` menu, then **Pull**. The PM goes first and has nothing to pull.
2. Open `README.md`. Under **Team**, replace `_(your name)_` on your own role line with your name. Press `Ctrl+S` to save.
3. In Source Control, your file appears under **Changes**. Click it to see the green and red difference, then click the `+` beside it to **stage** it.
4. Type a message such as `Add Matt to team` in the box and click **Commit**.
5. Click **Sync Changes** to push your commit to GitHub.
6. Tell the next person you are done.

**Check:** open your team's repository on github.com. The README shows every teammate's name.

Pulling before you edit is the habit that prevents most Git trouble. If you edit first and someone else pushed meanwhile, Sync may fail. See the troubleshooting table at the end of this file.

## Activity 3: Round 1, your own branch and pull request

Goal: each of you changes your own files on your own branch, then asks the PM to merge the work with a pull request. Everyone works at the same time. Your task is in [TASKS.md](TASKS.md), under **Round 1**.

1. **Start current.** Make sure the bottom-left corner shows `main`. In Source Control, click `...` then **Pull**.
2. **Create your branch.** Click `main` in the bottom-left corner, choose **Create new branch...**, type the branch name from your task and press Enter. The corner now shows your branch name.
3. **Do the task** by following the goal and hints in `TASKS.md`. Save your work.
4. **Commit.** In Source Control, click each changed file to review the green and red differences. Click `+` beside **Changes** to stage everything, type a short commit message and click **Commit**.
5. **Publish.** Click **Publish Branch** where the Commit button was.
6. **Open the pull request.** Go to your team's repository on github.com. A yellow banner says your branch had recent pushes. Click **Compare & pull request**.
7. **Check the base repository.** At the top of the page, `base repository` must be your team's fork (the PM's username) and `base` must be `main`. If it shows the instructor's repository, click it and choose your team's fork.
8. Use your commit message as the title, add one sentence describing the change, and click **Create pull request**.
9. **Do not merge it.** The PM merges in Activity 4. While you wait, open a teammate's pull request, click **Files changed** and read their code.

Teams of 3: Assign a team member to complete Task 3.

## Activity 4: Review, merge and pull

Goal: the PM merges the four pull requests, then everyone pulls the combined code.

**Project Manager**

1. On github.com, open the **Pull requests** tab of your team's repository.
2. Open the Task 1 pull request and click **Files changed** to skim it. Go back to the **Conversation** tab.
3. Check that GitHub says **This branch has no conflicts**, then click **Merge pull request** and **Confirm merge**.
4. Repeat for Tasks 2, 3 and 4, in that order.

**Everyone**

1. In VS Code, click the branch name in the bottom-left corner and choose `main`.
2. In Source Control, click `...` then **Pull**.
3. Open `led.ino`, `button.ino`, `light_sensor.ino` and `logger.ino`. Every teammate's code is now in your folder.
4. Open `config.h`, then expand **Timeline** at the bottom of the Explorer. It lists the commits that changed this file, with the author of each.

**Check:** on github.com, click **Commits** on the repository's main page. You see four merged pull requests.

## Activity 5: Round 2 and a merge conflict

Goal: build the finished features, and resolve the conflict that happens when two teammates change the same line. Tasks 5 and 6 are required. Tasks 7 and 8 are extra if time is short. Your tasks are in [TASKS.md](TASKS.md), under **Round 2**.

**Part A: your branch and pull request**

1. Confirm you are on `main` with the latest code (Activity 4, steps 1 and 2).
2. Complete your Round 2 task, following the same process as in Round 1. Developers B and C: your tasks edit files that a teammate wrote in Round 1.

**Part B: the PM merges, in this order**

1. Merge Task 5, then Task 8, then Task 7.
2. Open Task 6. GitHub says **This branch has conflicts that must be resolved**. Do not merge it. Tell Developer B.

The conflict is on purpose: Developer A's Task 5 and Developer B's Task 6 each changed the number on the same `DARK_THRESHOLD` line. Git cannot choose, so a human must.

**Part C: Developer B resolves the conflict in VS Code**

1. Check that the bottom-left corner shows `task6-banner`.
2. In Source Control, click `...` then **Fetch**. Then click `...`, choose **Branch**, then **Merge Branch...**, and pick `origin/main`.
3. VS Code reports a conflict. `config.h` appears under **Merge Changes**. Click it, then click **Resolve in Merge Editor**.
4. Left is **Incoming** (the PM's `main`, value 300), right is **Current** (your branch, value 400), and the **Result** is at the bottom. Agree with Developer A on 350. In the Result pane, edit the line to read `#define DARK_THRESHOLD    350`, keeping the comment after it.
5. Click **Complete Merge**. Confirm that no `<<<<<<<` or `>>>>>>>` lines remain in the file.
6. In Source Control, click **Commit** (the message is already filled in), then **Sync Changes**.
7. Return to your pull request on github.com. The conflict warning is gone. Tell the PM.

Everyone else: pull `main` and read the merged code while you wait.

**Part D: finish**

1. The PM merges Task 6.
2. Everyone switches to `main` and pulls. Open `config.h` and confirm `DARK_THRESHOLD` is 350.

**Final check:**

- [ ] Eight pull requests are merged (six if you skipped Tasks 7 and 8)
- [ ] The README on `main` shows every teammate's name
- [ ] `DARK_THRESHOLD` is 350 on `main`
- [ ] Every teammate has pulled the final `main`

## Quick reference and troubleshooting

| To do this | Do this in VS Code |
| --- | --- |
| Open Source Control | Click the branch icon on the left, or press `Ctrl+Shift+G` |
| Clone a repository | `Ctrl+Shift+P`, then `Git: Clone` |
| Stage a file | Click `+` beside the file under **Changes** |
| Commit | Type a message, click **Commit** |
| Push your commits | Click **Sync Changes** |
| Create a branch | Click the branch name in the bottom-left corner, then **Create new branch...** |
| Switch branches | Click the branch name in the bottom-left corner, pick a branch |
| Push a new branch | Click **Publish Branch** |
| Pull the latest | Source Control `...` menu, then **Pull** |
| Bring `main` into your branch | `...` menu, **Fetch**, then `...` > **Branch** > **Merge Branch...** > `origin/main` |
| Undo edits to a file | Click the arrow beside the file under **Changes** (this cannot be undone) |

| What you see | What it means and what to do |
| --- | --- |
| Push or Publish asks you to sign in | Approve the GitHub sign-in in your browser, then try again |
| Push is rejected with a permission error | You have not accepted the PM's invitation. Accept it, then try again |
| Sync fails with a message about diverged branches | You and a teammate both committed to the same branch. Ask your instructor. Avoid this by pulling before you edit |
| Your pull request is addressed to the instructor's repository | Close it, then open a new one and choose your team's fork as the base repository |
| The Task 6 pull request shows conflicts | Expected in Activity 5. Developer B follows Part C |
| `main` is missing a teammate's change | Make sure the PM merged their pull request, then pull again |
| You edited files while on `main` by mistake | Create a new branch from where you are. Your changes come with you, uncommitted |
