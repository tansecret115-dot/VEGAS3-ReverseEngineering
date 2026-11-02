/* Module: sfcdi.dll
   Function: SfCdi_Initialize
   Address: 5bf01480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall SfCdi_Initialize(struct HINSTANCE__ *,unsigned long,char *,unsigned long) */

long SfCdi_Initialize(HINSTANCE__ *param_1,ulong param_2,char *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* 0x1480  74  ?SfCdi_Initialize@@YGJPAUHINSTANCE__@@KPADK@Z */
  lVar1 = FUN_5bf22040(&DAT_5bf65fc0,"CD Interface",0x2000001,0);
  if (lVar1 == 0) {
    lVar1 = FUN_5bf28730(&DAT_5bf65fc4,DAT_5bf65eb8,param_4,0);
    if (lVar1 == 0) {
      FUN_5bf28630((ushort)param_4);
      FUN_5bf28570(DAT_5bf65fc4,param_4);
      FUN_5bf25770(param_1,0,(uchar *)param_3);
      _DAT_5bf65fd8 = param_2;
      lVar1 = SfScsi_Initialize(param_2);
      if (lVar1 < 0) {
        return lVar1;
      }
      FUN_5bf0ee30();
      FUN_5bf0f560();
      FUN_5bf07130(DAT_5bf65eb8);
      if ((param_2 & 1) != 0) {
        FUN_5bf08170(DAT_5bf65eb8);
      }
      if ((param_2 & 2) != 0) {
        FUN_5bf085e0(DAT_5bf65eb8);
      }
      DriveDB_Load((tSFLIST **)&DAT_5bf65ff0);
      FUN_5bf07830(&DAT_5bf65ff4);
      puVar3 = &DAT_5bf65ebc;
      for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      lstrcpynA((LPSTR)&DAT_5bf65ebc,param_3,0x103);
      DAT_5bf65fbe = 0;
    }
  }
  return lVar1;
}


