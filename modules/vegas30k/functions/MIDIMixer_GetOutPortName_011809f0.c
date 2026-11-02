/* Module: vegas30k.dll
   Function: MIDIMixer_GetOutPortName
   Address: 011809f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall MIDIMixer_GetOutPortName(long,char *,unsigned long) */

long MIDIMixer_GetOutPortName(long param_1,char *param_2,ulong param_3)

{
  int iVar1;
  int *unaff_ESI;
  int iVar2;
  undefined4 unaff_EDI;
  int *piVar3;
  undefined1 auStack_28 [4];
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  undefined4 *puStack_14;
  undefined4 local_4;
  
                    /* 0x1809f0  135  ?MIDIMixer_GetOutPortName@@YGJJPADK@Z */
  piVar3 = (int *)0x0;
  puStack_14 = &local_4;
  local_4 = 0;
  piStack_18 = DAT_012b09c8;
  iVar2 = 1;
  piStack_1c = (int *)0x1180a13;
  (**(code **)(*DAT_012b09c8 + 0x204))();
  if (unaff_ESI != (int *)0x0) {
    piStack_20 = (int *)&stack0xfffffff0;
    piStack_1c = (int *)0x0;
    piStack_24 = (int *)0x1;
    iVar1 = (**(code **)(*unaff_ESI + 0xc))();
    while (iVar1 == 0) {
      iVar1 = (**(code **)(*piStack_20 + 0x28))(piStack_20);
      if ((iVar1 == 0) && (iVar2 != 0)) {
        if (piStack_18 == piVar3) {
          iVar2 = (**(code **)(*piStack_24 + 0x10))(piStack_24,unaff_EDI,unaff_ESI);
        }
        piVar3 = (int *)((int)piVar3 + 1);
      }
      (**(code **)(*piStack_24 + 8))(piStack_24);
      iVar1 = (**(code **)(*piStack_24 + 0xc))(piStack_24,1,auStack_28,0);
    }
    (**(code **)(*piStack_1c + 8))(piStack_1c);
  }
  return iVar2;
}


