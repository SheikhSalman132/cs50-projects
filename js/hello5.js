document.addEventListener('DOMContentLoaded', function () {
    document.querySelector('form').addEventListener('submit', function (event) {
        event.preventDefault();
        let name = document.querySelector('#name').value;
        alert('Hello, ' + name);
    });
});
