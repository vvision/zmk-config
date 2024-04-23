# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.8.0] - 2024-04-xx

### Added

- Add macros to switch virtual desktop on Windows in the `adjust` layer.
- Add reset and bootloader keys on both keyboard split in the `adjust` layer.
- Add combo on s, d and f key in qwerty for the `TAB` key in `base` layer.
  Inspired by P.Coves keymap.

### Changed

- Move `ESCAPE` combo to d and f in qwerty in `base` layer.

## [0.7.0] - 2024-03-17

### Added

- Add macros to add space after dead keys in the `symbol` layer.
- Add ergol layout as another possible `base` layer.
- Declare shift macro for the ergol layer.
- Add home row mods in the `symbol` layer.

### Changed

- Use Miryoku logic to build different layers for different boards more easily.
- Move number 0 key on outer right home row.

### Fixed

- Use lt rather than hm to trigger the `navigation` layer in the `symbol` layer.     

## [0.6.2] - 2024-02-18

### Fixed

- Missing & for caps_word.

## [0.6.1] - 2024-02-18

### Changed

- Move escape combo to V and M key (in qwerty).
- Move `function` layer to C and , key (in qwerty).
- Move caps_word on double tap of shift.

## [0.6.0] - 2024-02-18

### Added

- Make shift key sticky on middle left thumb key.
- Toggle `function` layer with double tap on shift.

### Changed

- Move tab key on outer left thumb key in `symbol` layer.
- Move caps_word combo under F and J in qwerty in `base` layer.
- Switch function keys to right part in `function` layer.

## [0.5.1] - 2024-02-16

### Changed

- Move 0 in `symbol` layer closer to center and replace it with +.

## [0.5.0] - 2024-02-15

### Added

- Reactivate escape key combo on B and N key on base layer.

### Changed

- The `diacritics` layer is now sticky.
- Sticky layers will release after 1500 ms, rather than the default 1000 ms.

### Removed

- As `diacritics` layer is now a sticky layer, it removes `;` key and the right home row `GUI` configured on this key.

## [0.4.0] - 2024-02-14

## Added

- Home row mods on right side in the `navigation` layer.
- Numeric operators next to the numpad in `navigation` layer.
- Add shift on long press of left middle thumb key.

### Changed

- Switch to arrow pad on the left side of the `navigation` layer.
- Move numbers in `navigation` layer.
- Move `diacritics` layer toggle key from right thumb cluster to right home row outer key.

### Removed

- Remove home row mods from `symbol` layer as they might not be needed at all here.
- Disable escape combo.

## [0.3.0] - 2024-02-13

### Added

- Add numbers in the `function` layer.
- Add combos for caps_word and escape key.

### Changed

- Rename `function` layer to `number` layer.
- Move `number` layer to middle left thumb key.
- Make symbols directly accessible and reorder the whole `symbol` layer.

### Removed

- Remove escape key from middle left thumb in `symbol` layer.
- Remove caps_word from `navigation` layer.

## [0.2.5] - 2024-02-13

### Added

- Add shift key in `adjust` layer

### Fixed

- Missing left bracket key in `symbol` layer.

### Changed

- Enable experimental bluetooth improvements.

### Removed

- Remove external power management key which produces an error with zephyr 3.5.

## [0.2.4] - 2024-02-05

### Fixed

- Use modifier + key for copy, cut, paste, undo and redo.

## [0.2.3] - 2024-02-02

### Added

- Add insert and delete key to `navigation` layer, system reset and reset to bootloader to `adjust` layer.

## [0.2.2] - 2024-01-21

### Fixed

- Fix diacritic function to be able to use uppercase letter too

## [0.2.1] - 2024-01-20

### Fixed

- When using macros with hold tap, pass 0 as a dummy parameter value to the macro.

## [0.2.0] - 2024-01-20

## [0.1.0] - 2024-01-11
