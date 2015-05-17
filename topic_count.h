#pragma once

#include <vector>
#include <string>

struct Pair {
  int top_, cnt_; // N_wt , One Element, Non-zero topic id, Topic count

  Pair() = default; 
  Pair(int top, int cnt) : top_(top), cnt_(cnt) {}
};

struct TopicCount {
public:
  std::vector<Pair> item_; // N_wt , One Row

public:
  TopicCount() = default;

  void InitFromString(std::string s);
  void AddCount(int topic);
  void UpdateCount(int old_topic, int new_topic);

  void Print(); // debug

private:
  void IncrementExisting(int index);

};

