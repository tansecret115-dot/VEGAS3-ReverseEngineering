/* Module: extmondrv.dll
   Function: SfVideoDriver_QueryDeviceInfo
   Address: 00401010
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
SfVideoDriver_QueryDeviceInfo
          (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,LPWSTR param_4,int param_5,
          uint param_6)

{
  undefined4 *puVar1;
  
                    /* 0x1010  5  SfVideoDriver_QueryDeviceInfo */
  if ((-1 < (int)param_6) && (param_6 < 3)) {
    puVar1 = (undefined4 *)(&PTR_DAT_0044d550)[param_6 * 5];
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    param_1[3] = puVar1[3];
    puVar1 = (undefined4 *)(&PTR_DAT_0044d554)[param_6 * 5];
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
    *param_3 = *(undefined4 *)(&DAT_0044d558 + param_6 * 0x14);
    MultiByteToWideChar(0,1,(&PTR_s_OHCI_Compliant_IEEE_1394_DV_0044d55c)[param_6 * 5],-1,param_4,
                        param_5);
    param_4[param_5 + -1] = L'\0';
    return 0;
  }
  return 0x80070057;
}


