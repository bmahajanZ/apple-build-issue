//
//  ViewController.swift
//  CrashTest
//
//  Created by Bhaskar Mahajan on 24/07/24.
//

import UIKit
import CrashTestSDK

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }

    @IBAction func crashAppWithAbort(_ sender: Any) {
        let crashObj = PublicHeader()
        crashObj.crashAppWithAbort()
    }
    
    @IBAction func crashAppWithBadAccess(_ sender: Any) {
        let crashObj = PublicHeader()
        crashObj.crashAppWithBadAccess()
    }
}

