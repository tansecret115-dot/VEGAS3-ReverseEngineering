/* Module: stl2plg.dll
   Function: FUN_00402ed0
   Address: 00402ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00402ed0(undefined4 *param_1)

{
  int iVar1;
  HGLOBAL pvVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = &PTR_LAB_00464700;
  iVar1 = *(int *)((int)param_1 + 0x3d6);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + -4);
    if (-1 < iVar4 + -1) {
      puVar3 = (undefined4 *)(iVar1 + iVar4 + iVar4 * 0x14a + 0x12);
      do {
        if (*(LPCVOID *)((int)puVar3 + -0x14b) != (LPCVOID)0x0) {
          FUN_00402da0(*(LPCVOID *)((int)puVar3 + -0x14b));
          *(undefined4 *)((int)puVar3 + -0x14b) = 0;
        }
        iVar4 = iVar4 + -1;
        *(undefined4 *)((int)puVar3 + -0x147) = 0;
        puVar3 = (undefined4 *)((int)puVar3 + -0x14b);
      } while (iVar4 != 0);
    }
    pvVar2 = GlobalHandle((LPCVOID)(iVar1 + -4));
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)(iVar1 + -4));
    GlobalFree(pvVar2);
    *(undefined4 *)((int)param_1 + 0x3d6) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x3da) = 0;
  FUN_004012e0(param_1);
  return;
}


