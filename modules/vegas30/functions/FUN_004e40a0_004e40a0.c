/* Module: vegas30.exe
   Function: FUN_004e40a0
   Address: 004e40a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004e40a0(uint param_1)

{
  int iVar1;
  int iVar2;
  int *unaff_EBX;
  int iVar3;
  int *unaff_EDI;
  int iVar4;
  undefined4 *local_4;
  
  iVar2 = *(int *)(DAT_0064762c + 0x70);
  iVar3 = *(int *)(iVar2 + 0xbf0);
  iVar4 = *(int *)(iVar2 + 0xbf4);
  local_4 = (undefined4 *)0x0;
  iVar1 = FUN_00428c20();
  if (iVar1 != 1) {
    iVar1 = Transport_IsRecording();
    if (iVar1 == 0) {
      iVar1 = Transport_IsPlaying();
      if ((((iVar1 == 0) || (param_1 != 0)) && (*(int *)(iVar2 + 0xdd0) != 0)) &&
         ((*(byte *)(*(int *)(iVar2 + 0xdd0) + 0x134) & 0x20) == 0)) {
        iVar2 = FUN_005f1460(3,0);
        if (((iVar2 != 0) && ((*(uint *)(*(int *)(iVar2 + 8) + 0x134) >> 5 & 1) == 0)) &&
           (param_1 = *(uint *)(iVar2 + 0x8c) & 1, param_1 == 0)) {
          FUN_005fb200(1);
          if ((iVar4 < 1) && ((iVar4 < 0 || (iVar3 == 0)))) {
            iVar3 = 0;
            iVar4 = 0;
          }
          iVar1 = FUN_005f6990(&local_4);
          if (-1 < iVar1) {
            param_1 = 0;
            (**(code **)*local_4)(local_4,&DAT_00633558,&param_1);
            if (unaff_EBX != (int *)0x0) {
              FUN_00428df0(unaff_EBX,iVar2);
              (**(code **)(*unaff_EBX + 8))(unaff_EBX);
            }
            (**(code **)(*unaff_EDI + 8))(unaff_EDI);
            iVar2 = Transport_IsPreviewPlaying();
            if (iVar2 == 0) {
              FUN_00427f90(iVar3,iVar4,1,1);
            }
          }
        }
      }
    }
  }
  return 1;
}


