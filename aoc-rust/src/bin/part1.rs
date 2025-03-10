fn solve(lines: Vec<&str>) -> u32 {
    todo!()
}

fn main() {
    let lines = include_str!("input0.txt")
        .split('\n')
        .filter(|&line| !line.is_empty())
        .collect();
    println!("{}", solve(lines));
}
