/* Module: qt4plug.dll
   Function: FUN_5f511a70
   Address: 5f511a70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f511a70(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  LPSTR pCVar4;
  undefined4 *puVar5;
  int *unaff_ESI;
  undefined4 *puVar6;
  int *unaff_EDI;
  undefined4 *puVar7;
  int *piVar8;
  
  iVar1 = param_1;
  piVar8 = *(int **)(param_1 + 0x18);
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 8))(piVar8);
  }
  *(int **)(iVar1 + 0x18) = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  puVar5 = *(undefined4 **)(iVar1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    iVar2 = (**(code **)*puVar5)(puVar5,&DAT_5f595cb0,&stack0x00000000);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(iRam00000000 + 0x1c))(0,0x2711,&param_1,4);
      if (iVar2 != 0) {
        FUN_5f527c20((int)DAT_5f5a3e5c,(int)unaff_ESI);
      }
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    puVar3 = FUN_5f5139f0(iVar1);
    *(undefined **)(iVar1 + 0x28) = puVar3;
    if (puVar3 != (undefined *)0x0) {
      *(undefined4 *)(puVar3 + 8) = 0;
      pCVar4 = FUN_5f527a90(DAT_5f5a3e5c,DAT_5f5a2a10);
      iVar2 = *(int *)(iVar1 + 0x28);
      MultiByteToWideChar(0,1,pCVar4,-1,(LPWSTR)(iVar2 + 0x14),0x104);
      *(undefined2 *)(iVar2 + 0x21a) = 0;
      pCVar4 = FUN_5f527a90(DAT_5f5a3e5c,DAT_5f5a2a14);
      iVar2 = *(int *)(iVar1 + 0x28);
      MultiByteToWideChar(0,1,pCVar4,-1,(LPWSTR)(iVar2 + 0x21c),0x104);
      *(undefined2 *)(iVar2 + 0x422) = 0;
      puVar5 = *(undefined4 **)(iVar1 + 0x18);
      if (puVar5 != (undefined4 *)0x0) {
        iVar2 = (**(code **)*puVar5)(puVar5,&DAT_5f595c10);
        if (-1 < iVar2) {
          piVar8 = (int *)0x28;
          puVar5 = (undefined4 *)(**(code **)(*unaff_ESI + 0x20))(unaff_ESI,0x42);
          if (puVar5 != (undefined4 *)0x0) {
            puVar6 = &DAT_5f5a0020;
            puVar7 = puVar5;
            for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          **(undefined4 **)(*(int *)(iVar1 + 0x28) + 0x428) = puVar5;
          puVar5 = (undefined4 *)
                   (**(code **)(*(int *)register0x00000010 + 0x20))(register0x00000010,0x42,0x28);
          if (puVar5 != (undefined4 *)0x0) {
            puVar6 = &DAT_5f5a0020;
            puVar7 = puVar5;
            for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar7 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          *(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x28) + 0x428) + 0x48) = puVar5;
          (**(code **)(*piVar8 + 8))(piVar8);
        }
      }
      return 0;
    }
    return 0x8007000e;
  }
  return 0;
}


