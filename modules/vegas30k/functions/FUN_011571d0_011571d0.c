/* Module: vegas30k.dll
   Function: FUN_011571d0
   Address: 011571d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011571d0(int param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined1 local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if ((*(uint *)(param_1 + 0x60) & 1) == 0) {
    FUN_01155f80(param_1,"Missing IHDR before tRNS");
LAB_011571f0:
    cVar1 = *(char *)(param_1 + 0x11e);
    if (cVar1 == '\x03') {
      if ((*(byte *)(param_1 + 0x60) & 2) == 0) {
        FUN_01155fb0(param_1,"Missing PLTE before tRNS");
      }
      else if (*(ushort *)(param_1 + 0x110) < param_3) {
        FUN_01155fb0(param_1,"Incorrect tRNS chunk length");
        FUN_011561f0(param_1,param_3);
        return;
      }
      if (param_3 == 0) {
        FUN_01155fb0(param_1,"Zero length tRNS chunk");
        FUN_011561f0(param_1,0);
        return;
      }
      uVar3 = FUN_01155eb0(param_1,param_3);
      *(undefined4 *)(param_1 + 0x178) = uVar3;
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) | 0x2000;
      FUN_011561c0(param_1,uVar3,param_3);
      *(short *)(param_1 + 0x112) = (short)param_3;
    }
    else if (cVar1 == '\x02') {
      if (param_3 != 6) {
        FUN_01155fb0(param_1,"Incorrect tRNS chunk length");
        FUN_011561f0(param_1,param_3);
        return;
      }
      FUN_011561c0(param_1,local_8,6);
      *(undefined2 *)(param_1 + 0x112) = 1;
      uVar2 = FUN_011561a0(local_8);
      *(undefined2 *)(param_1 + 0x17d) = uVar2;
      uVar2 = FUN_011561a0(local_6);
      *(undefined2 *)(param_1 + 0x17f) = uVar2;
      uVar2 = FUN_011561a0(local_4);
      *(undefined2 *)(param_1 + 0x181) = uVar2;
    }
    else {
      if (cVar1 != '\0') {
        pcVar5 = "tRNS chunk not allowed with alpha channel";
        goto LAB_011573b9;
      }
      if (param_3 != 2) {
        FUN_01155fb0(param_1,"Incorrect tRNS chunk length");
        FUN_011561f0(param_1,param_3);
        return;
      }
      FUN_011561c0(param_1,local_8,2);
      *(undefined2 *)(param_1 + 0x112) = 1;
      uVar2 = FUN_011561a0(local_8);
      *(undefined2 *)(param_1 + 0x183) = uVar2;
    }
    iVar4 = FUN_011561f0(param_1,0);
    if (iVar4 == 0) {
      FUN_01128520(param_1,param_2,*(undefined4 *)(param_1 + 0x178),*(undefined2 *)(param_1 + 0x112)
                   ,param_1 + 0x17c);
      return;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0x60) & 4) == 0) {
      if ((param_2 != 0) && ((*(byte *)(param_2 + 8) & 0x10) != 0)) {
        FUN_01155fb0(param_1,"Duplicate tRNS chunk");
        FUN_011561f0(param_1,param_3);
        return;
      }
      goto LAB_011571f0;
    }
    pcVar5 = "Invalid tRNS after IDAT";
LAB_011573b9:
    FUN_01155fb0(param_1,pcVar5);
    FUN_011561f0(param_1,param_3);
  }
  return;
}


