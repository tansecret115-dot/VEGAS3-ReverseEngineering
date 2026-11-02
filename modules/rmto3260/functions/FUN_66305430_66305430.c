/* Module: rmto3260.dll
   Function: FUN_66305430
   Address: 66305430
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __thiscall FUN_66305430(void *this,char *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  LSTATUS LVar4;
  undefined4 local_54 [10];
  undefined4 local_2c [10];
  
  if (*(int *)((int)this + 0x24) != 0) {
    FUN_66305300(local_2c);
    FUN_66305300(local_54);
    FUN_66305540(local_2c,*(undefined4 *)((int)this + 8));
    FUN_66305560(local_2c,param_1);
    FUN_66305520(local_2c,0xc);
    uVar1 = FUN_66305380((int)local_2c);
    if (-1 < (int)uVar1) {
      FUN_663055a0((int)local_2c);
      iVar2 = FUN_663055c0(local_2c,local_54);
      while (iVar2 != 0) {
        puVar3 = (undefined4 *)FUN_66305590((int)local_54);
        FUN_66305430(local_2c,(char *)*puVar3);
        FUN_663055a0((int)local_2c);
        iVar2 = FUN_663055c0(local_2c,local_54);
      }
      FUN_66305400((int)local_2c);
      LVar4 = RegDeleteKeyA(*(HKEY *)((int)this + 8),param_1);
      if (LVar4 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = RegDeleteKeyA(*(HKEY *)((int)this + 8),param_1);
        uVar1 = uVar1 & 0xffff | 0x80070000;
      }
    }
    FUN_66305360(local_54);
    FUN_66305360(local_2c);
    return uVar1;
  }
  return 0x80040009;
}


