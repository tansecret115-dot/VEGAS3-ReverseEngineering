/* Module: vegas30k.dll
   Function: FUN_01156540
   Address: 01156540
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01156540(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  
  iVar3 = param_1;
  uVar1 = *(uint *)(param_1 + 0x60);
  if ((uVar1 & 1) == 0) {
    pcVar6 = "Missing IHDR before PLTE";
  }
  else {
    if ((uVar1 & 4) != 0) {
      FUN_01155fb0(param_1,"Invalid PLTE after IDAT");
      FUN_011561f0(param_1,param_3);
      return;
    }
    if ((uVar1 & 2) == 0) goto LAB_01156582;
    pcVar6 = "Duplicate PLTE chunk";
  }
  FUN_01155f80(param_1,pcVar6);
LAB_01156582:
  uVar1 = param_3;
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
  if (param_3 % 3 != 0) {
    if (*(char *)(param_1 + 0x11e) != '\x03') {
      FUN_01155fb0(param_1,"Invalid palette chunk");
      FUN_011561f0(param_1,uVar1);
      return;
    }
    FUN_01155f80(param_1,"Invalid palette chunk");
  }
  iVar2 = (int)uVar1 / 3;
  iVar4 = FUN_01126d10(param_1,iVar2,3);
  *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x1000;
  if (0 < iVar2) {
    puVar5 = (undefined1 *)(iVar4 + 2);
    param_1 = iVar2;
    do {
      FUN_011561c0(iVar3,&param_3,3);
      puVar5[-2] = (undefined1)param_3;
      puVar5[-1] = param_3._1_1_;
      *puVar5 = param_3._2_1_;
      param_1 = param_1 + -1;
      puVar5 = puVar5 + 3;
    } while (param_1 != 0);
  }
  FUN_011561f0(iVar3,0);
  *(int *)(iVar3 + 0x10c) = iVar4;
  *(short *)(iVar3 + 0x110) = (short)iVar2;
  FUN_011282c0(iVar3,param_2,iVar4,iVar2);
  if ((((*(char *)(iVar3 + 0x11e) == '\x03') && (param_2 != 0)) &&
      ((*(byte *)(param_2 + 8) & 0x10) != 0)) &&
     (*(ushort *)(iVar3 + 0x110) < *(ushort *)(iVar3 + 0x112))) {
    FUN_01155fb0(iVar3,"Truncating incorrect tRNS chunk length");
    *(undefined2 *)(iVar3 + 0x112) = *(undefined2 *)(iVar3 + 0x110);
  }
  return;
}


