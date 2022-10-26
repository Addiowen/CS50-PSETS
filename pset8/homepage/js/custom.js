document.addEventListener("DOMContentLoaded", function() {
    let course_button = document.querySelector("#button_cs50");
    course_button.addEventListener("click", function() {
        window.open("https://cs50.harvard.edu/x/2022/", '_blank');
    })

    let my_work_button = document.querySelector("#button_my_work");
    my_work_button.addEventListener("click", function() {
        window.open("https://github.com/Addiowen/", "_blank");
    })
});