/* Module: rmme3260.dll
   Function: FUN_66248b50
   Address: 66248b50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_66248b50(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  undefined4 local_c;
  
  local_c = 0x80004005;
  if (*(int *)(param_1 + 0x1194) != 0) {
    return 0;
  }
  FUN_66244a50();
  iVar3 = *(int *)(param_1 + 0xc);
  if (((iVar3 != 0) &&
      (puVar2 = (uint *)(**(code **)(*(int *)(iVar3 + 8) + 0x1c))(iVar3 + 8), puVar2 != (uint *)0x0)
      ) && (*puVar2 != 0)) {
    puVar1 = (uint *)(param_1 + 0x48);
    puVar4 = puVar1;
    for (iVar3 = 0x33e; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    iVar3 = 1;
    if (((*(byte *)(param_1 + 0x11a8) & 1) != 0) &&
       (iVar3 = FUN_6624a510(puVar1,*puVar2,1,(LPCSTR)0x0), iVar3 != 0)) {
      FUN_6624ad70(puVar1);
    }
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x11a8) = *(uint *)(param_1 + 0x11a8) & 0xffffffd6;
      iVar3 = FUN_6624a510(puVar1,*puVar2,0,(LPCSTR)0x0);
      if (iVar3 != 0) {
        return 0x80004005;
      }
    }
    local_c = 0;
    *(undefined4 *)(param_1 + 0x1194) = 1;
  }
  return local_c;
}


