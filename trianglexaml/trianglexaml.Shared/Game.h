#pragma once

using namespace Microsoft::WRL;
using namespace Windows::UI::Core;
using namespace Platform;
using namespace DirectX;
using namespace Windows::UI::Xaml::Controls;

// a struct to represent a single vertex
struct VERTEX
{
	float X, Y, Z;    // vertex position
};


class CGame
{
public:
	ComPtr<ID3D11Device1> dev;              // the device interface
	ComPtr<ID3D11DeviceContext1> devcon;    // the device context interface
	ComPtr<IDXGISwapChain1> swapchain;      // the swap chain interface
	ComPtr<ID3D11RenderTargetView> rendertarget;    // the render target interface
	ComPtr<ID3D11Buffer> vertexbuffer;              // the vertex buffer interface
	ComPtr<ID3D11VertexShader> vertexshader;        // the vertex shader interface
	ComPtr<ID3D11PixelShader> pixelshader;          // the pixel shader interface
	ComPtr<ID3D11InputLayout> inputlayout;          // the input layout interface

	void Initialize(SwapChainPanel ^swapChainPanel=nullptr);
	void Update();
	void Render();
	void InitGraphics();
	void InitPipeline();
};
