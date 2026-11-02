/* Module: vegas30.exe
   Function: SfImageList_BltToDC
   Address: 005492d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfImageList_BltToDC(struct tSFIMAGELIST const *,long,long,struct HDC__
   *,long,long,struct tagRECT *,float) */

long SfImageList_BltToDC(tSFIMAGELIST *param_1,long param_2,long param_3,HDC__ *param_4,long param_5
                        ,long param_6,tagRECT *param_7,float param_8)

{
  HGDIOBJ h;
  long lVar1;
  
                    /* 0x1492d0  21
                       ?SfImageList_BltToDC@@YGJPBUtSFIMAGELIST@@JJPAUHDC__@@JJPAUtagRECT@@M@Z */
  h = SelectObject(*(HDC *)(param_1 + 0x43c),*(HGDIOBJ *)(param_1 + 0x438));
  BitBlt(*(HDC *)(param_1 + 0x43c),0,0,*(int *)param_1,*(int *)(param_1 + 4),param_4,param_5,param_6
         ,0xcc0020);
  lVar1 = SfImageList_BltToDibSection
                    (param_1,param_2,param_3,(tSFDIBSECTION *)(param_1 + 0x10),0,0,(tagRECT *)0x0,
                     param_8);
  BitBlt(param_4,param_5,param_6,*(int *)param_1,*(int *)(param_1 + 4),*(HDC *)(param_1 + 0x43c),0,0
         ,0xcc0020);
  SelectObject(*(HDC *)(param_1 + 0x43c),h);
  return lVar1;
}


