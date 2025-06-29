const standard: type = @import("std");

const build = standard.Build;

pub fn build_executable() void {
    const executable = build.addExecutable(.{
        .name = "htdi",
        .root_source_file = build.path("./src/main.zig"),
        .target = build.host,
    });

    build.installArtifact(executable);
}
