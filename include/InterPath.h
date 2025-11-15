#pragma once
class InterPath {
	//InterPath() = delete;
	//public: explicit InterPath(const char* address);
	public: explicit InterPath(std::string address);

	//operator std::string() const { return path; }

	public: std::string toString();

			

	//public: std::string getPath();

	//private: const char path[128];
	private: const std::string path;
};