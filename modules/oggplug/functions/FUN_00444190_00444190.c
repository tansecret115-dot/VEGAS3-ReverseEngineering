/* Module: oggplug.dll
   Function: FUN_00444190
   Address: 00444190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_00444190(int *param_1,double param_2)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  undefined8 uVar5;
  
  FUN_004433a0((int)param_1,-1);
  fVar4 = FUN_00443410((int)param_1,-1);
  dVar1 = (double)fVar4;
  if (1 < param_1[0x16]) {
    if (param_1[1] == 0) {
      return 0xffffff76;
    }
    if ((_DAT_0044c570 <= param_2) && (param_2 <= dVar1)) {
      iVar2 = param_1[0xd];
      do {
        iVar2 = iVar2 + -1;
        if (iVar2 < 0) break;
        fVar4 = FUN_00443410((int)param_1,iVar2);
        dVar1 = (double)((float10)dVar1 - fVar4);
      } while (param_2 < dVar1);
      uVar5 = ftol();
      uVar3 = FUN_00443790(param_1,(uint)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      return uVar3;
    }
  }
  return 0xffffff7d;
}


