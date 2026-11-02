/* Module: Setup.exe
   Function: _SfMetric_DeleteKeyService@12
   Address: 00421920
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfMetric_DeleteKeyService_12(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  CHAR local_104 [260];
  
                    /* 0x21920  275  _SfMetric_DeleteKeyService@12 */
  uVar2 = (undefined1)((uint)param_2 >> 0x18);
  uVar1 = (undefined1)((uint)param_2 >> 0x10);
  if (param_3 == 0) {
    wsprintfA(local_104,"SYSTEM\\CurrentControlSet\\Services\\%s\\%d.%d\\Metrics",param_1,uVar2,
              uVar1);
  }
  else {
    wsprintfA(local_104,"SYSTEM\\CurrentControlSet\\Services\\%s\\%d.%d\\Metrics\\%s",param_1,uVar2,
              uVar1,param_3);
  }
  _SfRegDeleteKey_8((HKEY)0x80000002,local_104);
  return 0;
}


