zmk-config
==========

My configuration for a custom built split keyboard.
Based on the Aurora Corne from [splitkb](https://splitkb.com).

Uses [ZMK](https://zmk.dev/) with [nice!nano](https://nicekeyboards.com/nice-nano).

It should used be in combination with the `US International` language, as it makes heavy uses of dead keys for diacritics.

## Layers

All layers are defined in `config/src/layers/layer_alternatives.h` for reusability between keyboards with different number of keys.

### Base layers

1. BASE_QWERTY: Base qwerty layout with home row mods.
2. SYM: All symbols with a focus of recurring symbols used in programmation. Based on [Lafayette 42](https://qwerty-lafayette.org/42) symbol layer.
3. NAV_NUM: Arrows (pad style) and other helpers (Copy/Paste, Insert/Delete, ...). Right side with numpad.
4. NUM_ROW: A number layer inspired by [selenium33](https://github.com/OneDeadKey/arsenik/tree/main/mods/selenium33#numrow--numpad), with numbers on the home row and shifted symbols just above.
5. DIACRITICS: Diacritics for French language.
6. FUNCTIONS: Right side with function keys from F1 to F12, F1 to F9 in the same position as a numpad.
7. ADJUST: Bluetooth + Volume + Media + available space for shortcuts/macro.

### Optional layers

These layers are defined, but not currently used.

* BASE_ERGOL: Base ergol layer with home row mods. A layer optimized for the french language.
* NAV_VIM_EXT: A navigation layer inspired by [selenium33](https://github.com/OneDeadKey/arsenik/tree/main/mods/selenium33#extended-navigation), with vim style arrow keys.
* DIA_ERGOL: Diacritics layer for the ergol layer.

## Visualisation

To view all layouts in a graphical way, use [keymap-drawer](https://keymap-drawer.streamlit.app/) (Also available on [GitHub](https://github.com/caksoylar/keymap-drawer)).

Other interesting tools:
* [keyboard-layout-editor.com](http://www.keyboard-layout-editor.com/#/).
* [Corne keymap-editor](https://nickcoutsos.github.io/keymap-editor/)

## Resources

### References

- [splitkb - Aurora Corne](https://github.com/splitkb/aurora/tree/master/Aurora%20Corne)

### Inspiration

- [Miryoku Reference Manual](https://github.com/manna-harbour/miryoku/tree/master/docs/reference) for general layers and home row mods.
- [Miryoku ZMK](https://github.com/manna-harbour/miryoku_zmk) for implementation and code split.
- [QWERTY Lafayette 42](https://qwerty-lafayette.org/42), [Ergo-L](https://ergol.org/) for `symbol` layer and `diacritics` layer.
- [arsenik](https://github.com/OneDeadKey/arsenik), [shaka34](https://github.com/lobre/shaka34) for `navigation` layer.
- [selenium33](https://github.com/OneDeadKey/arsenik/tree/main/mods/selenium33) for `number` layer.

### Reading

- [A guide to home row mods](https://precondition.github.io/home-row-mods#putting-home-row-mods-on-almost-all-layers)
- P. Coves Blog:
[36 keys is enough](https://pcoves.gitlab.io/en/blog/keyboard-36-keys/) followed by
[I was wrong: 36 is too much](https://pcoves.gitlab.io/en/blog/i-was-wrong-36-keys-is-way-too-much/)
- [5x3_3 Keyboard Layout](https://evantravers.com/articles/2023/05/27/5x3-3-keyboard-layout/#fn1) - [Source](https://github.com/evantravers/zmk-config/blob/master/config/corneish_zen.keymap)
- [Programming On 34 Keys](https://peppe.rs/posts/programming_on_34_keys/)
- [Seniply](https://stevep99.github.io/seniply/)
- [Colemak Mod-DH](https://colemakmods.github.io/mod-dh/)
- [Ben Vallack Layout](https://github.com/benvallack/zmk-config/blob/84ae125986b18e1e6dfb1f2a6a15777429f29520/config/cradio.keymap) ([Video](https://www.youtube.com/watch?v=8wZ8FRwOzhU))
- ([A split 34 key layout for ipados](https://mattgemmell.scot/a-split-34-key-layout-for-ipados/))
- ([selenium33](https://github.com/OneDeadKey/arsenik/tree/main/mods/selenium33))
- [urob/zmk-config](https://github.com/urob/zmk-config)

### Practise

- Typing Club
  - [Typing Basics](https://www.typingclub.com/sportal/program-1.game)
  - [Typing Jungle](https://www.typingclub.com/sportal/program-3.game)
- [typing.com](https://www.typing.com/student/lessons)
- [keybr](https://www.keybr.com)
- [monkeytype](https://monkeytype.com/)

#### Not tested

- [Keyzen-Colemak](http://first20hours.github.io/keyzen-colemak/)
- [ridingintraffic/zmk-config-skeledong - how to pair multiple skeletyl boards to a single dongle.](https://github.com/ridingintraffic/zmk-config-skeledong)
