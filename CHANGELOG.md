# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]



## [0.2.5] - 2024-02-13

### Added

- Add shift key in adjust layer

### Fixed

- Missing left bracket key in symbol layer.

### Changed

- Enable experimental bluetooth improvements.

### Removed

- Remove external power management key which produces an error with zephyr 3.5.

## [0.2.4] - 2024-02-05

### Fixed

- Use modifier + key for copy, cut, paste, undo and redo.

## [0.2.3] - 2024-02-02

### Added

- Add insert and delete key to navigation layer, system reset and reset to bootloader to adjust layer.

## [0.2.2] - 2024-01-21

### Fixed

- Fix diacritic function to be able to use uppercase letter too

## [0.2.1] - 2024-01-20

### Fixed

- When using macros with hold tap, pass 0 as a dummy parameter value to the macro.

## [0.2.0] - 2024-01-20

## [0.1.0] - 2024-01-11