//
//  AddItemViewController.m
//  CoreDataToDo
//
//  Created by Jason Hellwege on 21/06/14.
//  Copyright (c) 2014 RMIT. All rights reserved.
//

#import "AddItemViewController.h"
#import "ToDoItem.h"

@interface AddItemViewController ()
@property (weak, nonatomic) IBOutlet UITextView *taskTextView;
@property (weak, nonatomic) IBOutlet UIDatePicker *datePicker;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneButton;
@end

@implementation AddItemViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}


#pragma mark - Navigation

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if (sender != self.doneButton) {
        return;
    }
    // Set ToDoItem's properties from textView and datePicker
    self.addedItem.task = self.taskTextView.text;
    self.addedItem.dueDate = self.datePicker.date;
}

#pragma mark - Dismiss keyboard
- (void) touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event {
    // Dismiss the keyboard when the view outside the text view is touched.
    [self.taskTextView resignFirstResponder];
    [super touchesBegan:touches withEvent:event];
}

@end
