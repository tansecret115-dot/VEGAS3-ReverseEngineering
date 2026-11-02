/* Module: vegas30k.dll
   Function: FUN_011bccc0
   Address: 011bccc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011bccc0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  byte bVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar3 = 0;
  if ((*(byte *)(param_1 + 8) & 0x30) == 0) {
    return 0;
  }
  bVar2 = (byte)param_3 & 0xf0;
  if ((0x7f < bVar2) && (bVar2 < 0xe1)) {
    if ((bVar2 == 0x90) || (bVar2 == 0x80)) {
      uVar6 = param_3 >> 0x10 & 0xff;
    }
    else {
      uVar6 = 0x20;
    }
    FUN_011bc1d0(param_4,uVar6);
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x254 + *(int *)(param_1 + 0x2b0) * 0xc),0xffffffff);
    uVar5 = 0;
    piVar1 = *(int **)(param_1 + (*(int *)(param_1 + 0x2b0) + 0x31) * 0xc);
    iVar3 = *piVar1;
    uVar4 = __allmul(param_4,0,10000,0);
    iVar3 = (**(code **)(iVar3 + 0x14))(piVar1,uVar4,uVar5,param_3);
    if (iVar3 == -0x7ff8fff2) {
      *(undefined4 *)(param_1 + 0x250 + *(int *)(param_1 + 0x2b0) * 0xc) = 4;
      SetEvent(*(HANDLE *)(param_1 + 700));
      uVar6 = *(int *)(param_1 + 0x2b0) + 1;
      *(uint *)(param_1 + 0x2b0) = uVar6;
      if (*(uint *)(param_1 + 0x2ac) <= uVar6) {
        *(undefined4 *)(param_1 + 0x2b0) = 0;
      }
      FUN_011bccc0(unaff_EBP,unaff_EBX,param_4,unaff_ESI);
    }
  }
  return iVar3;
}


