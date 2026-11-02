/* Module: vidcap30.exe
   Function: FUN_00410d60
   Address: 00410d60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00410d60(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  int local_19c;
  int local_198;
  undefined1 local_194 [64];
  CHAR local_154 [80];
  CHAR local_104 [260];
  
  if (*(int *)(param_3 + 8) == -0x208) {
    switch(*(undefined4 *)(param_3 + 4)) {
    case 0x2a:
      iVar2 = FUN_0043df30();
      local_19c = 0;
      local_198 = 0;
      FUN_004260d0(iVar2,&local_19c);
      FUN_00426110(iVar2,&local_198);
      iVar3 = FUN_004349e0();
      iVar2 = lstrcmpiA((LPCSTR)(iVar2 + 0x28),"No Capture Device");
      if (iVar2 == 0) {
        pcVar5 = "Source Device";
      }
      else if (local_19c == 0) {
        pcVar5 = "Source Device: Analog";
      }
      else {
        pcVar5 = "VTR mode";
        if (iVar3 == 0) {
          pcVar5 = "Camera mode";
        }
        puVar4 = &DAT_005872f0;
        if (local_198 == 0) {
          puVar4 = &DAT_005872ec;
        }
        SfPrintF(local_104,"Source Device$: DV$, %s$, %s",puVar4,pcVar5);
        pcVar5 = local_104;
      }
      break;
    case 0x2b:
      pcVar5 = "Source Resolution";
      break;
    case 0x2c:
      uVar1 = FUN_0045c380();
      uVar6 = __allmul(uVar1,0,0x100000,0);
      _SfGetByteSizeText2_12(uVar6,local_194);
      SfPrintF(local_154,"Free Disk Space: %s",local_194);
      pcVar5 = local_154;
      break;
    case 0x2d:
      pcVar5 = "Display Resolution";
      break;
    default:
      goto switchD_00410d8c_default;
    }
    if (pcVar5 != (LPCSTR)0x0) {
      lstrcpynA((LPSTR)(param_3 + 0x10),pcVar5,0x50);
      *(undefined1 *)(param_3 + 0x5f) = 0;
    }
  }
switchD_00410d8c_default:
  return 0;
}


