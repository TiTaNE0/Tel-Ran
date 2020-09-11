$(document).ready(function () {
    $("#addTask").on('click keypress', function () {
        const taskVal = $("#task").val().trim();
//        var key = e.which;

        if (taskVal) { // && (key == 13)
            // if (("#taskList").children()) {
            //     const buttonClear = $("<button>Clear list</button>")
            //     $(this).next().append(buttonClear);
            // }
            const elemLi = $("<li></li>").text(taskVal);
            $("#taskList").append(elemLi);
            const buttonDel = $("<button>DEL</button>"); // .text.addClass("delButton")
            $("li").append(buttonDel);
            $("buttonDel").on("click", function() {
                $(this).remove('li');
            });
            $("#task").val("");
        }
    });
})