#pragma once

struct ID3D12PipelineState;
struct ID3D12GraphicsCommandList;

namespace Kore {
	namespace Graphics5 {
		class PipelineState;
		class Shader;
	}

	class PipelineState5Impl {
	public:
		PipelineState5Impl();
		ID3D12PipelineState* pso;
		// ID3D11InputLayout* inputLayout;
		// ID3D11Buffer* fragmentConstantBuffer;
		// ID3D11Buffer* vertexConstantBuffer;
		// ID3D11Buffer* geometryConstantBuffer;
		// ID3D11Buffer* tessEvalConstantBuffer;
		// ID3D11Buffer* tessControlConstantBuffer;

		Graphics5::Shader* vertexShader;
		Graphics5::Shader* fragmentShader;
		Graphics5::Shader* geometryShader;
		Graphics5::Shader* tessEvalShader;
		Graphics5::Shader* tessControlShader;
		static void setConstants(ID3D12GraphicsCommandList* commandList, Graphics5::PipelineState* pipeline);
	};

	class ConstantLocation5Impl {
	public:
		u32 vertexOffset;
		u32 vertexSize;
		u32 fragmentOffset;
		u32 fragmentSize;
		u32 geometryOffset;
		u32 geometrySize;
		u32 tessEvalOffset;
		u32 tessEvalSize;
		u32 tessControlOffset;
		u32 tessControlSize;
	};

	class AttributeLocation5Impl {};
}
