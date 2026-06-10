function findDay() {
    let d = parseInt(document.getElementById("day").value);
    let m = parseInt(document.getElementById("month").value);
    let y = parseInt(document.getElementById("year").value);

    let date = new Date(y, m - 1, d);

    let days = [
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday"
    ];

    document.getElementById("result").innerText =
        days[date.getDay()];
}