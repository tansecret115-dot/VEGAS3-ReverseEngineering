/* Module: vegas30k.dll
   Function: MIDIMixer_GetOutPortProps
   Address: 01180aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall MIDIMixer_GetOutPortProps(long,enum EMIDIDRVMODEL *,char *,unsigned long) */

long MIDIMixer_GetOutPortProps(long param_1,EMIDIDRVMODEL *param_2,char *param_3,ulong param_4)

{
  int iVar1;
  int *unaff_EBX;
  int *unaff_ESI;
  undefined4 *puVar2;
  int unaff_EDI;
  long lVar3;
  undefined4 uStack_28;
  int *piStack_24;
  int *piStack_20;
  undefined4 local_4;
  
                    /* 0x180aa0  136  ?MIDIMixer_GetOutPortProps@@YGJJPAW4EMIDIDRVMODEL@@PADK@Z */
  puVar2 = (undefined4 *)0x0;
  local_4 = 0;
  lVar3 = 1;
  (**(code **)(*DAT_012b09c8 + 0x204))();
  if (unaff_ESI == (int *)0x0) {
    return 1;
  }
  piStack_24 = (int *)&stack0xfffffff0;
  piStack_20 = (int *)0x0;
  uStack_28 = 1;
  iVar1 = (**(code **)(*unaff_ESI + 0xc))(unaff_ESI);
  if (iVar1 != 0) {
LAB_01180b69:
    (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    return lVar3;
  }
  do {
    iVar1 = (**(code **)(*piStack_20 + 0x28))(piStack_20);
    if (iVar1 == 0) {
      if (&local_4 == puVar2) {
        if (unaff_EDI != 0) {
          (**(code **)(*piStack_24 + 0x10))(piStack_24,unaff_EDI,unaff_ESI);
        }
        if (&local_4 != (undefined4 *)0x0) {
          (**(code **)(*piStack_24 + 0x20))(piStack_24,&local_4);
        }
        (**(code **)(*piStack_24 + 8))(piStack_24);
        lVar3 = 0;
        goto LAB_01180b69;
      }
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    (**(code **)(*piStack_24 + 8))(piStack_24);
    iVar1 = (**(code **)(*piStack_24 + 0xc))(piStack_24,1,&uStack_28,0);
    if (iVar1 != 0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
      return 1;
    }
  } while( true );
}


