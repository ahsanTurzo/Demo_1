"use strict";
jQuery(document).ready(function (e) {
    var n = e("#cbxcountdown"),
            l = n.data("year"),
            i = n.data("month"),
            u = n.data("day"),
            h = n.data("hours"),
            m = n.data("minutes"),
            d = new Date(l, i - 1, u, h, m);
    e(".lz-circular-countdown-container").length && e(".lz-circular-countdown-container").final_countdown({
        now: Date.now() / 1e3,
        end: d.getTime() / 1e3,
        selectors: {
            value_seconds: ".lz-circular-clock-seconds .lz-circular-val",
            canvas_seconds: "lz-circular-canvas_seconds",
            value_minutes: ".lz-circular-clock-minutes .lz-circular-val",
            canvas_minutes: "lz-circular-canvas_minutes",
            value_hours: ".lz-circular-clock-hours .lz-circular-val",
            canvas_hours: "lz-circular-canvas_hours",
            value_days: ".lz-circular-clock-days .lz-circular-val",
            canvas_days: "lz-circular-canvas_days"
        }
    });

});