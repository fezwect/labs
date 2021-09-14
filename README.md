# labs
govnoKOD

commit

```bash
git commit -a -m "message"
```
[bit.ly/algProg](http://bit.ly/algProg)

Вы можете также указать git хранить ваши данные постоянно:

> git config credential.helper store

При этом ваши данные будут храниться в открытом виде в файле .git-credentials.

Обнулить настройки этой возможности можно командой:

> git config --unset credential.helper

При желании можно подобное поведение для всех репозиториев, для этого нужно передать дополнительный ключ --global.
