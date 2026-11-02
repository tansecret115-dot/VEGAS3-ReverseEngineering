/* Module: rmme3260.dll
   Function: FUN_6624b840
   Address: 6624b840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_6624b840(uint *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  HGDIOBJ pvVar2;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_1[1] != 0)) &&
     (((*param_1 & 0x100) != 0 && ((*param_2 & 0x100) != 0)))) {
    if ((*param_2 & 1) != 0) {
      uVar1 = (**(code **)(*(int *)param_2[0x10e] + 0x44))((int *)param_2[0x10e],param_3);
      return uVar1;
    }
    pvVar2 = SelectObject((HDC)param_1[0x219],*(HGDIOBJ *)(param_2[0x10e] + 0x54));
    param_1[0x21b] = (uint)pvVar2;
    *param_3 = param_1[0x219];
    return 0;
  }
  return 0x80070057;
}


