$(document).ready(function () {
    $('.skillset').hide();
//    $('.skillset').show(1000);
    $('.skillset').fadeIn(1000);
    $('.projects').hide();
    $('.project-button').on('click', function () {
        $(this).next().slideToggle(100);
        $(this).toggleClass('active');
        $(this).text('Project viewed')
    });
});


/*
сделать to-do на JQuery + доп чтобы работало с Enter
*/