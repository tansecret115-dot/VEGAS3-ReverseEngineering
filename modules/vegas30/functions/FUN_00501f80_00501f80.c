/* Module: vegas30.exe
   Function: FUN_00501f80
   Address: 00501f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00501f80(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_104 [260];
  
  if ((DAT_0064b584 != (uint *)0x0) && (uVar1 = *DAT_0064b584, uVar1 != 0)) {
    FUN_00502080(local_104);
    FUN_00501ee0(local_104);
    FUN_00501d40("TEMPLATES",0);
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        iVar2 = *(int *)(DAT_0064b584[2] + uVar3 * 4);
        FUN_00501d40("TEMPLATE",0);
        FUN_00501e50(&DAT_00619d60,iVar2);
        FUN_00501e50(&DAT_00619d68,iVar2 + 0x100);
        FUN_00501e50("PARAMETER",iVar2 + 0x500);
        FUN_00501e50("COMMENT",iVar2 + 0x900);
        FUN_00501dd0("TEMPLATE");
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    FUN_00501dd0("TEMPLATES");
    FUN_00501f60();
  }
  return;
}


