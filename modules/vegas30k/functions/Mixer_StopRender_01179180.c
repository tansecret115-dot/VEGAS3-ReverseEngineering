/* Module: vegas30k.dll
   Function: Mixer_StopRender
   Address: 01179180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0117925d) */
/* long __stdcall Mixer_StopRender(unsigned long) */

long Mixer_StopRender(ulong param_1)

{
  int iVar1;
  int unaff_retaddr;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined1 *puStack_324;
  undefined4 uStack_320;
  int *piStack_31c;
  undefined4 local_310;
  undefined1 auStack_30c [4];
  undefined1 auStack_308 [220];
  undefined1 auStack_22c [16];
  undefined1 auStack_21c [540];
  
                    /* 0x179180  244  ?Mixer_StopRender@@YGJK@Z */
  local_310 = 0;
  piStack_31c = DAT_012b09c8;
  uStack_320 = 0x11791a5;
  iVar1 = (**(code **)(*DAT_012b09c8 + 0x130))();
  if (-1 < iVar1) {
    uStack_320 = 0x11791b4;
    FUN_01183330();
    uStack_320 = 0x11791b9;
    FUN_011832e0();
    uStack_320 = 0x11791be;
    FUN_01179150();
    if (unaff_retaddr != -1) {
      puStack_324 = auStack_308;
      uStack_320 = 0x104;
      (**(code **)(*DAT_012b09c8 + 0x2c))(DAT_012b09c8,&local_310);
      iVar1 = (**(code **)(*DAT_012b09c4 + 0x4c))
                        (DAT_012b09c4,uStack_320,&stack0xfffffce8,&puStack_324);
      if (-1 < iVar1) {
        uStack_320 = 0;
        puStack_324 = (undefined1 *)0x0;
        puVar3 = auStack_30c;
        piVar4 = (int *)0x0;
        (**(code **)(*DAT_012b09c8 + 0x24))(DAT_012b09c8,puVar3,0,&stack0xfffffce8);
        puVar2 = puStack_324;
        (**(code **)(*piVar4 + 0x1c))(piVar4,puStack_324,auStack_21c,puVar3);
        (**(code **)(*DAT_012b09c8 + 100))(DAT_012b09c8,auStack_22c,puVar2);
      }
    }
  }
  uStack_320 = 0x1179268;
  Mixer_Prepare();
  return iVar1;
}


