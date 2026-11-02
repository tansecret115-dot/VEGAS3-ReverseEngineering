/* Module: vegas30k.dll
   Function: FUN_011bcec0
   Address: 011bcec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011bcec0(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((*(byte *)(param_1 + 8) & 4) != 0) {
    do {
      WaitForSingleObject(*(HANDLE *)(param_1 + 700),*(DWORD *)(param_1 + 0x2b8));
      iVar2 = *(int *)(param_1 + 0x2b4);
      bVar1 = *(byte *)(param_1 + 0x250 + iVar2 * 0xc);
      while ((bVar1 & 4) != 0) {
        ResetEvent(*(HANDLE *)(param_1 + iVar2 * 0xc + 0x254));
        if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
          uVar8 = 0;
          uVar6 = *(undefined4 *)(param_1 + 0x220);
          uVar7 = *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x2b4) + 0x31) * 0xc);
          uVar5 = 0x2b;
        }
        else {
          uVar8 = 0x80000000;
          uVar6 = *(undefined4 *)(param_1 + 0x220);
          uVar7 = *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x2b4) + 0x31) * 0xc);
          uVar5 = 0x2a;
        }
        (**(code **)(param_1 + 0x21c))
                  (param_1,uVar5,uVar6,uVar7,uVar8,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
        piVar3 = *(int **)(param_1 + (*(int *)(param_1 + 0x2b4) + 0x31) * 0xc);
        (**(code **)(*piVar3 + 0xc))(piVar3);
        *(undefined4 *)(param_1 + 0x250 + *(int *)(param_1 + 0x2b4) * 0xc) = 1;
        SetEvent(*(HANDLE *)(param_1 + 0x254 + *(int *)(param_1 + 0x2b4) * 0xc));
        uVar4 = *(int *)(param_1 + 0x2b4) + 1;
        *(uint *)(param_1 + 0x2b4) = uVar4;
        if (*(uint *)(param_1 + 0x2ac) <= uVar4) {
          *(undefined4 *)(param_1 + 0x2b4) = 0;
        }
        iVar2 = *(int *)(param_1 + 0x2b4);
        bVar1 = *(byte *)(param_1 + 0x250 + iVar2 * 0xc);
      }
      ResetEvent(*(HANDLE *)(param_1 + 700));
    } while ((*(byte *)(param_1 + 8) & 4) != 0);
    return 0;
  }
  return 0;
}


