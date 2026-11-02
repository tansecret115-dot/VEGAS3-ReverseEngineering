/* Module: rmme3260.dll
   Function: FUN_6624e360
   Address: 6624e360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl
FUN_6624e360(undefined4 *param_1,int param_2,int *param_3,LPRECT param_4,LPPOINT param_5)

{
  int iVar1;
  undefined4 local_80 [2];
  uint local_78;
  uint local_74;
  tagRECT local_14;
  
  local_80[0] = 0x6c;
  iVar1 = (**(code **)(*(int *)param_1[0x22c] + 0x58))((int *)param_1[0x22c],local_80);
  if (iVar1 == -0x7789fe3e) {
    (**(code **)(*(int *)param_1[0x22c] + 0x6c))((int *)param_1[0x22c]);
    (**(code **)(*(int *)param_1[0x22c] + 0x58))((int *)param_1[0x22c],local_80);
  }
  iVar1 = FUN_6624e2c0(param_1,param_2,param_3,&param_4->left,&local_14);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_6624e180(param_3,&param_4->left,local_14.right,local_14.bottom);
  if (iVar1 == 0) {
    return;
  }
  param_5->x = 0;
  param_5->y = 0;
  ClientToScreen((HWND)*param_1,param_5);
  OffsetRect(param_4,param_5->x,param_5->y);
  FUN_6624e180(param_3,&param_4->left,local_74,local_78);
  return;
}


