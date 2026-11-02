/* Module: vegas30.exe
   Function: FUN_005380d0
   Address: 005380d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005380d0(void)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  LPCSTR pCVar3;
  undefined4 *puVar4;
  undefined4 in_stack_00001688;
  int *in_stack_00001690;
  LPCSTR in_stack_000016a4;
  int *piVar5;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  FUN_0060ac30();
  pCVar3 = in_stack_000016a4;
  puVar4 = (undefined4 *)&stack0x00000210;
  for (iVar2 = 0x28c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  pCVar3 = in_stack_000016a4;
  puVar4 = (undefined4 *)&stack0x00000c40;
  for (iVar2 = 0x28c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  puStack_10 = &stack0x00000210;
  puStack_14 = &LAB_00537c00;
  iVar2 = _SfDialogBoxParam_20();
  if (iVar2 == 1) {
    puVar4 = (undefined4 *)&stack0x00000c40;
    pCVar3 = in_stack_000016a4;
    for (iVar2 = 0x28c; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pCVar3 = *puVar4;
      puVar4 = puVar4 + 1;
      pCVar3 = pCVar3 + 4;
    }
    iVar2 = 0;
    *(int **)(in_stack_000016a4 + 0x110) = in_stack_00001690;
    *(undefined4 *)(in_stack_000016a4 + 0xa24) = in_stack_00001688;
    if (in_stack_00001690 != (int *)0x0) {
      puStack_10 = &stack0x00000004;
      puStack_14 = &DAT_0060f0e8;
      iVar1 = (**(code **)*in_stack_00001690)();
      if (iVar1 == 0) {
        MultiByteToWideChar(0,1,in_stack_000016a4,-1,(LPWSTR)&stack0xfffffffc,0x104);
        InterlockedIncrement(&DAT_0065e144);
        iVar2 = (**(code **)(*unaff_ESI + 0xc))();
        InterlockedDecrement(&DAT_0065e144);
        if (-1 < iVar2) {
          if ((&stack0x00000000 == (undefined1 *)0x14) || ((short)puStack_14 != 0)) {
            WideCharToMultiByte(0,0,(LPCWSTR)&puStack_14,-1,in_stack_000016a4,0x104,(LPCSTR)0x0,
                                (LPBOOL)0x0);
          }
          else if (in_stack_000016a4 != (LPCSTR)0x0) {
            *in_stack_000016a4 = '\0';
          }
          in_stack_000016a4[0x103] = '\0';
        }
        (**(code **)(*in_stack_00001690 + 8))();
      }
      else {
        iVar1 = (**(code **)**(undefined4 **)(in_stack_000016a4 + 0x110))();
        if (iVar1 == 0) {
          InterlockedIncrement(&DAT_0065e144);
          piVar5 = (int *)0x104;
          iVar2 = (**(code **)(*in_stack_00001690 + 0xc))();
          InterlockedDecrement(&DAT_0065e144);
          (**(code **)(*piVar5 + 8))();
          return iVar2;
        }
      }
    }
    return iVar2;
  }
  return 1;
}


