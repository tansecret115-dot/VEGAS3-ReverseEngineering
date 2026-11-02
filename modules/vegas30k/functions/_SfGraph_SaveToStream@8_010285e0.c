/* Module: vegas30k.dll
   Function: _SfGraph_SaveToStream@8
   Address: 010285e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void _SfGraph_SaveToStream_8(int *param_1)

{
  int iVar1;
  HRESULT HVar2;
  LPSTREAM unaff_retaddr;
  undefined1 local_10 [16];
  
                    /* 0x285e0  1005  _SfGraph_SaveToStream@8 */
  iVar1 = (**(code **)(*param_1 + 0xc))(param_1,local_10);
  if (iVar1 == 0) {
    HVar2 = WriteClassStm(unaff_retaddr,(IID *)&stack0xffffffe8);
    if (HVar2 == 0) {
      (**(code **)(*param_1 + 0x18))(param_1,unaff_retaddr,1);
    }
  }
  return;
}


