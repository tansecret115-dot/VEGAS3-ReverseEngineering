/* Module: rmme3260.dll
   Function: FUN_6624d920
   Address: 6624d920
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl FUN_6624d920(HDC param_1,COLORREF param_2)

{
  HDC pHVar1;
  int iVar2;
  COLORREF color;
  uint uVar3;
  undefined4 local_70 [9];
  uint *local_4c;
  uint local_1c;
  
  pHVar1 = param_1;
  iVar2 = (**(code **)(*(int *)param_1[0x22c].unused + 0x44))((int *)param_1[0x22c].unused,&param_1)
  ;
  if (iVar2 == 0) {
    color = GetPixel(param_1,0,0);
    SetPixel(param_1,0,0,param_2);
    (**(code **)(*(int *)pHVar1[0x22c].unused + 0x68))((int *)pHVar1[0x22c].unused,param_1);
    local_70[0] = 0x6c;
    iVar2 = (**(code **)(*(int *)pHVar1[0x22c].unused + 100))
                      ((int *)pHVar1[0x22c].unused,0,local_70,1,0);
    if (iVar2 == -0x7789fe3e) {
      (**(code **)(*(int *)pHVar1[0x22c].unused + 0x6c))((int *)pHVar1[0x22c].unused);
      iVar2 = (**(code **)(*(int *)pHVar1[0x22c].unused + 100))
                        ((int *)pHVar1[0x22c].unused,0,local_70,1,0);
    }
    if (iVar2 == 0) {
      uVar3 = *local_4c;
      (**(code **)(*(int *)pHVar1[0x22c].unused + 0x80))((int *)pHVar1[0x22c].unused,0);
      if (local_1c < 0x20) {
        uVar3 = uVar3 & (1 << ((byte)local_1c & 0x1f)) - 1U;
      }
      iVar2 = (**(code **)(*(int *)pHVar1[0x22c].unused + 0x44))
                        ((int *)pHVar1[0x22c].unused,&param_1);
      if (iVar2 == 0) {
        SetPixel(param_1,0,0,color);
        (**(code **)(*(int *)pHVar1[0x22c].unused + 0x68))((int *)pHVar1[0x22c].unused,param_1);
      }
      return uVar3;
    }
  }
  return 0xffffffff;
}


