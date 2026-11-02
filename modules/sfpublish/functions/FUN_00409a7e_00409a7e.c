/* Module: sfpublish.dll
   Function: FUN_00409a7e
   Address: 00409a7e
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_00409a7e(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,
            LPRECT param_6,LPRECT param_7,undefined4 *param_8)

{
  int *piVar1;
  int *piVar2;
  HGLOBAL pvVar3;
  undefined4 *puVar4;
  HACCEL pHVar5;
  HWND pHVar6;
  
  piVar1 = (int *)(param_3 + 0x30);
  if (*(int *)(param_3 + 0x30) == 0) {
    pvVar3 = GlobalAlloc(0x40,0x2c);
    puVar4 = GlobalLock(pvVar3);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_00409f20((int)puVar4);
      *puVar4 = &PTR_LAB_00435c94;
      puVar4[8] = &PTR_FUN_00435c58;
      InterlockedIncrement(&DAT_0044176c);
    }
    (**(code **)puVar4[8])(puVar4 + 8,&DAT_0043cb00,piVar1);
  }
  piVar2 = (int *)(param_3 + 0x34);
  if (*(int *)(param_3 + 0x34) == 0) {
    pvVar3 = GlobalAlloc(0x40,0x2c);
    puVar4 = GlobalLock(pvVar3);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      FUN_0040a2f0((int)puVar4);
      *puVar4 = &PTR_LAB_00435c4c;
      puVar4[8] = &PTR_FUN_00435c28;
      InterlockedIncrement(&DAT_0044176c);
    }
    (**(code **)puVar4[8])(puVar4 + 8,&DAT_0043caf0,piVar2);
  }
  *param_4 = *piVar1;
  piVar1 = (int *)*piVar1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  *param_5 = *piVar2;
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  GetClientRect(*(HWND *)(param_3 + -0x24),param_6);
  GetClientRect(*(HWND *)(param_3 + -0x24),param_7);
  pHVar5 = CreateAcceleratorTableA((LPACCEL)&stack0x00000000,1);
  *param_8 = 0x14;
  param_8[1] = *(uint *)(param_3 + 0x60) >> 2 & 1;
  pHVar6 = GetParent(*(HWND *)(param_3 + -0x24));
  param_8[2] = pHVar6;
  param_8[3] = pHVar5;
  param_8[4] = 1;
  return 0;
}


