/* Module: rmme3260.dll
   Function: FUN_6624d490
   Address: 6624d490
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl
FUN_6624d490(undefined4 param_1,int param_2,int param_3,uint param_4,undefined *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_3 < 0xb) && ((param_4 & 1 << ((byte)param_3 & 0x1f)) != 0)) {
    iVar1 = windraw_GetColorConverter(param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = (*(code *)param_5)(param_1,param_3,iVar1);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  if ((((&DAT_66270568)[param_2 * 4] & 2) != 0) && ((param_4 & 1 << ((byte)param_2 & 0x1f)) != 0)) {
    iVar1 = windraw_GetColorConverter(param_2,param_2);
    if (iVar1 != 0) {
      iVar1 = (*(code *)param_5)(param_1,param_2,iVar1);
      if (iVar1 != 0) {
        return 1;
      }
    }
  }
  uVar2 = windraw_ScanCompatibleColorFormats(param_2,param_4,param_1,param_5);
  return uVar2;
}


