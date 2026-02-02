import XCTest
import SwiftTreeSitter
import TreeSitterJust

final class TreeSitterJustTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_just())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Just grammar")
    }
}
