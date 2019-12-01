#ifndef INPUTARRAY_H
#define INPUTARRAY_H

#include "input.h"

class NodeInputArray : public NodeInput
{
  Q_OBJECT
public:
  NodeInputArray(const QString &id);

  int GetSize() const;

  void Prepend();
  void Append();
  void InsertAt(int index);
  void RemoveLast();
  void RemoveAt(int index);
  void SetSize(int size);

  int IndexOfSubParameter(NodeInput* input) const;

  NodeInput* ParamAt(int index) const;

signals:
  void SizeChanged(int size);

private:
  QVector<NodeInput*> sub_params_;

};

#endif // INPUTARRAY_H
