/* Module: rmme3260.dll
   Function: FUN_6623c450
   Address: 6623c450
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6623c450(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  HDC hdc;
  int iVar3;
  tagRECT local_14;
  
  *(undefined4 *)(param_1 + 100) = 1;
  if ((*(int *)(param_1 + 0x74) == 0) || (*(int *)(*(int *)(param_1 + 0x74) + 0x4a2) != 1)) {
    piVar1 = (int *)(**(code **)(*(int *)(param_1 + 8) + 0x1c))(param_1 + 8);
    iVar2 = FUN_6623d000(param_1);
    if ((iVar2 != 0) && ((piVar1 != (int *)0x0 && (*piVar1 != 0)))) {
      param_2 = param_2 + *(int *)(param_1 + 0xd4);
      param_4 = param_4 + *(int *)(param_1 + 0xd4);
      param_5 = param_5 + *(int *)(param_1 + 0xd8);
      param_3 = param_3 + *(int *)(param_1 + 0xd8);
      hdc = GetDC((HWND)*piVar1);
      iVar3 = GetClipBox(hdc,&local_14);
      if (iVar3 != 1) {
        InvalidateRect((HWND)*piVar1,(RECT *)&param_2,0);
        if (*(int *)(iVar2 + 0x214) == 0) {
          *(int *)(iVar2 + 0x204) = param_2;
          *(int *)(iVar2 + 0x208) = param_3;
          *(int *)(iVar2 + 0x20c) = param_4;
          *(int *)(iVar2 + 0x210) = param_5;
        }
        else {
          UnionRect((LPRECT)(iVar2 + 0x204),(LPRECT)(iVar2 + 0x204),(RECT *)&param_2);
        }
        *(undefined4 *)(iVar2 + 0x214) = 1;
      }
      ReleaseDC((HWND)*piVar1,hdc);
    }
  }
  return 0;
}


