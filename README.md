iPhone App Template
===================

I use this to bootstrap my apps. 

It includes:
* Pods
* Utils and helpers I use.
* Build configuration to support side-by-side installation per environment.
* My preferred project folder tree organization.


Setup
-----

### Rename the Application Name
1. Rename project name
	* Select project in **Project Navigator** ![Project Navigator](http://i.imgur.com/yDmbD.png "Project Navigator")
	* Select the **File Inspector**, enter the Project name and the Organization name 
	
		![File Inspector](http://i.imgur.com/YCbeL.png "File Inspector") 

2. Update Build Settings 
	* Rename APP_NAME. This name will be displayed on the SpringBoard
	* Rename BUNDLE_ID. Make sure they are different for each configuration to enable side-by-side installation.

3. Find & Replace in Files
	* The company name - `Acme Corporation` 
	* The developer name -  `Aviel Lazar`

4. Rename Scheme
	* Select in menu Product > Manage Scheme...
 	* Single click the SomeApp scheme and change the name. 	

### Install Pods
Make sure your got [CocoaPods](https://github.com/CocoaPods/CocoaPods) installed.

```
$ [sudo] gem install cocoapods
```
And then you install the pods

```
$ pod install
```
Remember to always open the Xcode workspace instead of the project file when you're building.

```
$ open App.xcworkspace
```



