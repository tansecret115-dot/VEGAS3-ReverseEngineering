/* Module: vegas30k.dll
   Function: MIDIMixer_NumInPorts
   Address: 011808b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* long __stdcall MIDIMixer_NumInPorts(enum EMIDIDRVMODEL) */

long MIDIMixer_NumInPorts(EMIDIDRVMODEL param_1)

{
  int *piVar1;
  int iVar2;
  int *unaff_ESI;
  int iVar3;
  int *unaff_EDI;
  undefined4 *puStack_30;
  undefined4 uStack_1c;
  int *piStack_18;
  int *piStack_14;
  int local_8 [2];
  
                    /* 0x1808b0  137  ?MIDIMixer_NumInPorts@@YGJW4EMIDIDRVMODEL@@@Z */
  iVar3 = 0;
  piStack_14 = local_8;
  local_8[0] = 0;
  piStack_18 = DAT_012b09c8;
  uStack_1c = 0x11808cd;
  (**(code **)(*DAT_012b09c8 + 0x204))();
  if (unaff_ESI != (int *)0x0) {
    uStack_1c = 0;
    iVar2 = (**(code **)(*unaff_ESI + 0xc))();
    piVar1 = piStack_14;
    while (iVar2 == 0) {
      puStack_30 = &uStack_1c;
      (**(code **)(iRam00000001 + 0x20))(1);
      if ((piVar1 == &iRam00000001) &&
         (iVar2 = (**(code **)(*unaff_EDI + 0x28))(unaff_EDI), iVar2 == 0)) {
        iVar3 = iVar3 + 1;
      }
      (**(code **)(*unaff_EDI + 8))(unaff_EDI);
      iVar2 = (**(code **)(*unaff_EDI + 0xc))(unaff_EDI,1,&puStack_30,0);
    }
    puStack_30 = (undefined4 *)0x118093c;
    (*(code *)piStack_14[2])();
  }
  return iVar3;
}


