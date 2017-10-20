#pragma once

#include "OpenGLWindow.h"
#include "MyArcball.h"

#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>
#include <QMouseEvent>
#include <QWheelEvent>
#include <QGLWidget>

class TriangleWindow : public OpenGLWindow
{
public:
	TriangleWindow();
	~TriangleWindow();

	void initialize() override;
	void render() override;

private:
	GLuint m_posAttr;
	GLuint m_colAttr;
	GLuint m_matrixUniform;
	GLuint m_texUniform;

	QMatrix4x4 m_ModelMatrix;//模型矩阵
	QMatrix4x4 m_ViewMatrix; //视图矩阵  
	QMatrix4x4 m_ProjectionMatrix; //投影矩阵  
	QMatrix4x4 m_MVPMatrix; //MVP矩阵

	QOpenGLShaderProgram *m_program;
	QOpenGLTexture *m_texture;
	int m_frame;
	MyArcball m_arcball;
};