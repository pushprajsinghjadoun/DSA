-- to create database
CREATE DATABASE library;

-- inside database their are several tables


CREATE TABLE addbook (
    id int NOT NULL AUTO_INCREMENT,
    sub_cat varchar(255),
    title varchar(255),
    author varchar(255),
    publisher varchar(255),
    year  int(20),
    isbn varchar(30),
    copies int(10)

  INSERT INTO addbook (sub_cat,title,author,publisher,year,isbn,copies)
VALUES ('Computer Science','Theoretical computer science (Online)', ' European Association for Theoretical Computer Science', ' Amsterdam : Elsevier Science',1975,1879-2294,5)
,('Computer Science','Fundamental concepts in computer science',' E. Gelenbe 1945','London : Imperial College Press ; Singapore ; Hackensack, NJ : Distributed by World Scientific',2009,1-282-44126-4,2),
('Computer Science','Mathematical structures in computer science (Online)',' Cambridge University Press 1991','',1991,1469-8072,5),
('Computer Science','Journal of information technology and computer science','Universitas Brawijaya. Fakultas Ilmu Komputer, issuing body','Malang, Indonesia : Faculty of Computer Science, Universitas',2006,2540-9824,5),
('Computer Science',' Computer science. Science 2.0','Shneiderman, Ben','United States' ,2012,0036-8075,5),
('Computer Science','Computer science. Beyond the data deluge','Bell, Gordon','United States',2013,0036-8075,5),
('Computer Science','Computer science: a very short introduction','Dasgupta, Subrata','Oxford University Press',2016,0198733461,5),
('Computer Science','Fundamental concepts in computer science','E. Gelenbe 1945-; Jean-Pierre Kahane','London : Imperial College Press ; Singapore ; Hackensack, NJ : Distributed by World Scientific',2009,9786612441264,5),
('Computer Science','International e-Conference on Computer Science 2006','International e-Conference on Computer Science Corporate Author ; International e-Conference on Computer Science (2006) ; T. E. Simos editor.; G Psihoyios (Georgios), editor.; International e-Conference on Computer Science','Leiden, The Netherlands ; Boston : Brill',2007, 9786611917418,5),
('Computer Science','A Dictionary of Computer Science','Butterfield, Andrew ; Ngondi, Gerard Ekembe ; Kerr, Anne','Oxford: Oxford University Press, Incorporated 2016',2016,9780199688975,5),
('Information Technology','Information Technology and the U.S. Workforce: Where Are We and Where Do We Go from Here?','National Academies of Sciences, Engineering, and Medicine ; Committee on Information Technology, Automation, and the U.S. Workforce ; Computer Science and Telecommunications Board ; Division on Engineering and Physical Sciences','National Academies Press',2017,9780309454025,5),
('Information Technology','Information technology in government Britain and America','Helen Margetts','London ; New York : Routledge',1999,'1-134-68646-3',5),
('Information Technology','Being fluent with information technology','National Research Council (U.S.). Committee on Information Technology Literacy','Washington, DC : National Academy Press',1999,1-282-08145-4,5),
('Information Technology','Journal of systems and information technology information and communication technology in South Africa','Michael Kyobe','Michael Kyobe',2011,9786613299529,5),
('Information Technology','Students guide to information technology','Roger Carter 1939- author','Oxford, England : Newnes 2nd ed',1995,'1-4831-8383-1',6),
('Information Technology','Global Health Informatics: How Information Technology Can Change Our Lives in a Globalized World','Marin, Heimar ; Massad, Eduardo ; Gutierrez, Marco Antonio ; Rodrigues, Roberto Jaime ; Sigulem, Daniel','San Diego: Elsevier Science & Technology',2016,9780128045916,5),
('Information Technology','Professional issues in information technology','Frank Bott author','Swindon, UK : BCS, The Chartered Institute for IT Second edition',2014,9781780171807,5),
('Information Technology','BrightSoft : sustaining the information technology agenda','Kapil Dev Singh','SAGE Publications Pvt. Ltd',2014,'1-5264-3153-X',5),
('Information Technology','Tourism information technology','Pierre Benckendorff author. ; Pauline J. Sheldon author.; Daniel R. Fesenmaier','CABI',2014,'9781780641850',5),
('Information Technology','Introduction to information technology law','David I Bainbridge','Harlow : Pearson Longman 6th ed. / David Bainbridge',2008,9781405846660,5),
('Information Technology','Information technology law : the law and society','Andrew Murray','Oxford University Press',2016,9780198732464,5),
('Information Technology','Information technology investment : decision-making methodology','Marc J Schniederjans ; Jamie L Hamaker; Ashlyn M Schniederjans','World Scientific',2014,9814282561,5),
('Information Technology','Involuntary attrition in indian information technology firms (A)','Shrihari S. Sohani author. ; Biju Varkkey author',' Indian Institute of Management, Ahmedabad',2015,'1-5264-2906-3',5),
('Information Technology','The digital city : the American metropolis and information technology','Michel S Laguerre','Basingstoke : Palgrave Macmillan',2005,9781403997104,4),
('Information Technology','Innovation with information technologies in healthcare','Lyle Berkowitz; Chris McCarthy',' Springer London',2013,9781447160663,5),
('Information Technology','Business information technology','T Cleary','Pitman',1998,0273634100,5),
('Mechanical Engineering','Dictionary of Mechanical Engineering','Atkins, Tony ; Escudier, Marcel','Oxford University Press',2013,9780199587438,5),
('Mechanical Engineering','Handbook of mechanical engineering calculations','Hicks, Tyler Gregory ; Hicks, Tyler G','New York: McGraw-Hill',2006,9780071458863,5),
('Mechanical Engineering','Nanoparticle Engineering for Chemical-Mechanical Planarization: Fabrication of Next-Generation Nanodevices','Paik, Ungyu ; Park, Jea-Gun','CRC Press',2016,9781420059113,5),
('Mechanical Engineering','Engineering Tribology','Stachowiak, Gwidon ; Batchelor, Andrew W','Oxford: Elsevier Science & Technology',2013,9780123970473,5),
('Mechanical Engineering','Optimal and Robust Control: Advanced Topics with MATLAB','Fortuna, Luigi ; Frasca, Mattia ; Frasca, Mattia ; Fortuna, Luigi','Bosa Roca: CRC Press',2012,9781466501911,5),
('Mechanical Engineering','Analytical heat transfer','Han, Je-Chin','CRC Press',2016,9781439861967,5),
('Mechanical Engineering','Aircraft Structures for Engineering Students','Megson, T. H. G','Oxford: Elsevier Science & Technology',2012,9780080969053,5),
('Mechanical Engineering','Mathematical formulas for industrial and mechanical engineering','Seifedine Kadry','Waltham, MA : Elsevier',2014,0-12-420222,5),
('Mechanical Engineering','Marks Standard Handbook for Mechanical Engineers, 12th Edition','Worek, William M ; Sadegh, Ali M','McGraw-Hill',2017,9781259588501,5),
('Mechanical Engineering','Participation and technological change in the mechanical engineering industry: A European survey','Williams R','Luxembourg: OPOCE',1991,9789282605967,5),
('Mechanical Engineering','Making things move: DIY mechanisms for inventors, hobbyists, and artists','Roberts, Dustyn','New York, N.Y: McGraw-Hill Education LLC',2010,9780071741675,5),
('Mechanical Engineering','Variable Speed AC Drives with Inverter Output Filters','Guzinski, Jaroslaw ; Abu-Rub, Haitham ; Strankowski, Patryk','New York: John Wiley & Sons, Incorporated',2015,9781118791929,5),

('Mechanical Engineering','Analytical heat transfer','Han, Je-Chin','CRC Press',2016,9781439861967,5),
('Mechanical Engineering','Mechanical engineering science','John Hannah ; M. J Hillier','Harlow : Longman 3rd ed',1999,0582326753,5),
('Mechanical Engineering','An introduction to mechanical engineering. Part 1','Michael Clifford','London : Hodder Education',2009,9780340939956,5),
('Mechanical Engineering','The CRC handbook of mechanical engineering','Frank Kreith; D. Yogi Goswami','Boca Raton, Fl. ; London : CRC Press 2nd ed',2004,0849308666,5),
('Mechanical Engineering','A history of mechanical engineering','A. F Burstall','Faber',1963,9781439451292,5),
('Mechanical Engineering','Foundations of mechanical engineering','Anthony Johnson ; K Sherwin','Chapman & Hall',1996,0748764232,5),
('Mechanical Engineering','Mechatronics : electronic control systems in mechanical engineering','W Bolton','Longman 2nd ed',1999,0582357055,5),
('Mechanical Engineering','Mechanical engineering thermodynamics : a laboratory guide','M. A Plint ; L Boswirth','London : Griffin',1986,0852642768,5),
('Mechanical Engineering','An introduction to mechanical engineering. Part 2','Michael Clifford; Richard Brooks','London : Hodder Education',2010,9780340939963,5),
('Mechanical Engineering','Oxford English for electrical and mechanical engineering','Eric H Glendinning ; N Glendinning','Oxford : Oxford University Press 1995',1995,0194573923,5),
('Mechanical Engineering','Progress through mechanical engineering : the first 150 years of the Institution of Mechanical Engineers','John Pullin','Quiller',1997,'189916328X',5),
('Mechanical Engineering','Diesel engine engineering : thermodynamics, dynamics, design and control','Andrei Makartchouck','New York : Marcel Dekker',2002,0824707028,5),
('Civil Engineering','Civil Engineering and Symmetry','Zavadskas, Edmundas Kazimieras ','Multidisciplinary Digital Publishing Institute',2019,9783039210022,5),
('Civil Engineering','Building materials in civil engineering','Haimei Zhang; Shuo Ma; Yanyan Wu','Cambridge : Woodhead Pub',2011,'1-84569-956-4',5),
('Civil Engineering','Civil engineering PE practice exams: breadth and depth','Goswami, Indranil','New York: McGraw-Hill Education',2013,9780071777117,5),
('Civil Engineering','Civil engineering procedure','Institution of Civil Engineers (Great Britain)','London : ICE Publishing',2016,9780727760692,5),
('Civil Engineering','Dictionary of Construction, Surveying, and Civil Engineering','Gorse, Christopher ; Johnston, David ; Pritchard, Martin','Oxford: Oxford University Press',2012, 9780199534463,5),
('Civil Engineering','The Delft Sand, Clay and Rock Cutting Model','Miedema, S. A','Burke: IOS Press',2014,9781614994534,5),
('Civil Engineering','An Introduction to Soil Mechanics','Verruijt, Arnold','Cham: Springer International Publishing',2017,9783319611846,5),
('Civil Engineering','Novel Biocomposite Engineering and Bio-Applications','Gary Chinga Carrasco','MDPI - Multidisciplinary Digital Publishing Institute',2019,9783038973836,5),
('Civil Engineering','Handbook of civil engineering calculations','Hicks, Tyler G','McGraw-Hill',2016,9781259586859,5),
('Civil Engineering','Advanced civil, urban and environmental engineering','International Conference on Civil, Urban and Environmental Engineering ; Yeh, J','WIT Press',2014,9781784660444,5),
('Civil Engineering','Dynamic of civil engineering and transport structures and wind engineering','International Scientific Conference on Dynamic of Civil Engineering and Transport Structures and Wind Engineering Corporate Author','Pfaffikon, Switzerland : TTP',2014,'3-03826-580-2',5),
('Civil Engineering','Geosynthetics in civil engineering','R. W Sarsby; Textile Institute (Manchester, England)','Boca Raton, Florida ; Cambridge, England : CRC Press : Woodhead Publishing',2007,'1-84569-249-7',5),
('Civil Engineering','Civil engineering project management','A. C Twort (Alan Charles), 1920- ; J. Gordon Rees','Oxford : Elsevier/Butterworth-Heinemann',2004,9786610754458,5),
('Civil Engineering','Civil engineering contracts : practice and procedure','Charles K. Haswell author. ; Douglas S. De Silva author','London, England : Butterworths',1989,'1-4831-6191-9',5),
('Civil Engineering','Intelligent vibration control in civil engineering structures','Zhao-Dong Xu author. ; Zhao-Dong Xu','Amsterdam, Netherlands : Zhejiang University Press',2017,' 0-12-405511-7',5),
('Civil Engineering','Civil engineering procedure','Institution of Civil Engineers','London : ICE Publishing',2016,9780727760692,5),
('Civil Engineering','Civil engineering quantities','Ivor H Seeley ; G. P Murray','Basingstoke : Palgrave,',2001,0333800745,5),
('Civil Engineering','Civil engineering procedure','Institution of Civil Engineers','London : Telfor',2009,9780727735249,5),
('Civil Engineering','Life cycle costing : for the analysis, management and maintenance of civil engineering infrastructure','John W. Bull editor','Dunbeath, Caithness, Scotland, UK : Whittles Publishing',2015, 9781849951487,5),
('Civil Engineering','Civil engineering contractual procedures','A Ashworth','Harlow : Longman',1998,0582251273,5),
('Civil Engineering','Civil engineering : project management','Alan C Twort ; J. Gordon Rees','Oxford : Butterworth-Heinemann',2003,0750657316,5),
('Civil Engineering','CESMM4 : Civil Engineering Standard Method of Measurement examples','Institution of Civil Engineers','London : ICE Publishing',2015,9780727757593,5),
('Civil Engineering','Civil engineering construction : design and management','Dene R Warren','Basingstoke : Macmillan',1996,0333636821,5),
('Electronic Engineering','Electronic Engineering Applications of Two-Port Networks Applied Electricity and Electronics Division','H. B Gatland','Burlington : Elsevier Science',2014,'1-4831-8735-7',5),
('Electronic Engineering','Micro/Nano Manufacturing','Hans Nørgaard Hansen ; Guido Tosello','MDPI',2017, 9783038426042,5),
('Electronic Engineering','Programming arduino next steps: going further with sketches','Monk, Simon','New York, N.Y: McGraw-Hill Education LLC',2014,9780071830263,5),
('Electronic Engineering','Standard handbook of electronic engineering','Donald Christiansen; Charles K Alexander; Ronald K Jurgen','New York : McGraw-Hill',2012,9780071384216,5),
('Electronic Engineering','Strain-Engineered MOSFETs','Maiti, C.K ; Maiti, T.K','Baton Rouge: CRC Press',2013,9781466500556,5),
('Electronic Engineering','Standard Handbook of Electronic Engineering (5th Edition)','Christiansen, Donald ; Alexander, Charles ; Jurgen, Ronald K','New York, USA: McGraw-Hill Professional Publishing',2005,9780071384216,5),
('Electronic Engineering','Introduction to Digital Signal Processing and Filter Design','Shenoi, B. A','Chichester: Wiley-Interscience 1',2005,0471464821,5),
('Electronic Engineering','Analog IC Design with Low-Dropout Regulators (LDOs)','Rincón-Mora, Gabriel A','New York, USA: McGraw-Hill Professional Publishing ',2009,9780071608930,5),
('Electronic Engineering','How to diagnose and fix everything electronic','Geier, Michael','McGraw-Hill',2015,9780071848299,5),
('Electronic Engineering','Flexible Electronics: Fabrication and Ubiquitous Integration','Martinez, Ramses V','MDPI',2019,9783038978282,5),
('Electronic Engineering','A first course on electronic engineering','Anoop Mathew',' Alpha Science International Ltd',2014,1-78332-054-0,5),
('Electronic Engineering','Control of Energy Storage','William Holderbaum','MDPI',2017,9783038424956,5),
('Electronic Engineering','Secondary Analysis of Electronic Health Records','MIT Critical Data','Cham: Springer Open',2016, 9784431551119,5),
('Electronic Engineering','Safer Healthcare: Strategies for the Real World','Vincent, Charles ; Amalberti, René','Cham: Springer Open',2016,3319390953,5),
('Electronic Engineering','Digital filters and signal processing in electronic engineering : theory, applications, architecture, code','S. M Bozic (Svetozar Mile) ; R. J Chance','Chichester, England : Horwood Publishing',1998,' 0-85709-974-4',5),
('Electronic Engineering','Basic electrical and electronic engineering','E. C Bell ; R. W Whitehead; W Bolton','Blackwell',1993,0632034939,5),
('Electronic Engineering','Integrated electrical and electronic engineering for mechanical engineers','Charles Fraser ; J Milne','McGraw Hill',1994,0077079736,5),
('Electronic Engineering','Electromagnetism for electronic engineers','R. G Carter','Chapman & Hall ',1992,0412427400,5),
('Electronic Engineering','Materials science for electrical and electronic engineers','I. P Jones','Oxford : Oxford University',2001,0198562942,5),
('Electronic Engineering','Design and realization of bipolar transistors','Peter Ashburn','Wiley',1988,0471917001,5),
('Electronic Engineering','Rectifiers, cycloconverters, and AC controllers','T. H Barton','Clarendon',1994,0198561636,5),
('Electronic Engineering','Instrumentation for engineers and scientists','J Turner ; Martyn Hill','Oxford U.P',1999,0198565178,5),
('Electronic Engineering','Signals and systems : models and behaviour','M. L Meade ; C. R Dillon','Chapman and Hal',1991,0442314604,5),
('Electronic Engineering','Vector control and dynamics of AC drives','D. W Novotny ; T. A Lipo','Oxford Clarendon',1996, 0198564392,5),
('Electronic Engineering','Feedback circuits and op. amps','D Horrocks','Chapman & Hall ',1990,0412342707,5),
('Electronic Engineering','Electronic and electrical engineering : principles and practice','L. A. A Warnes','Basingstoke : Palgrave Macmillan',2003,0333990404,5),
('Electronic Engineering','Wiley encyclopedia of electrical and electronics engineering','J. G Webster','New York ; Chichester : Wiley',1999,0471139467,5),
('Aerospace Engineering','Fluid-structure interactions in low-reynolds-number flows','Camille Duprat ; Camille Duprat ; Howard A. Stone','Cambridge: NBN International',2015, 9781782628491,5),
('Aerospace Engineering','Orbital Mechanics for Engineering Students','Curtis, Howard','San Diego: Elsevier Science & Technology',2009,9780080977478,5),
('Aerospace Engineering','The Future of Aerospace','Engineering, National Academy of Washington','D.C: National Academies',1993,9780309048811,5),
('Aerospace Engineering','Optimal and Robust Control: Advanced Topics with MATLAB','Fortuna, Luigi ; Frasca, Mattia ; Frasca, Mattia ; Fortuna, Luigi','Bosa Roca: CRC',2012,9781466501911,5),
('Aerospace Engineering','Introduction to aerospace materials','Adrian P Mouritz','Cambridge, England ; Philadelphia, Pennsylvania ; New Delhi, India : Woodhead',2012,'0-85709-515-3',5),
('Chemical engineering','Chemical engineering problems in biotechnology','M. A Winkler (Michael A) ; Society of Chemical Industry','Elsevier for the Society of Chemical Industry',1990,1851664548,5),
('Chemical engineering','Polymers and resins : their chemistry and chemical engineering','B Golding','Van Nostrand Reinhold',1959,975125412645,5),
('Chemical engineering','Biotechnology for the future','Jens Høiriis Nielsen; S Arnold','Berlin : Springer',2005,9783540259060,5),
('Chemical engineering','Process control systems : application, design, and tuning','F. G Shinskey','McGraw-Hill',1996, 0070571015,5),
('Chemical engineering','Cosmetics : types, allergies and applications','Laura M Hayes','Hauppauge, N.Y. : Nova Science',2011,9781617617614,5),
('Chemical engineering','Fundamentals of modern bioprocessing','Sarfaraz Niazi 1949- author. ; Justin L Brown (Justin Lee)','Boca Raton : CRC',2015,9781466585737,5),
('Chemical engineering','Carbon substrates in biotechnology','J. D Stowell ; Society for General Microbiology; Microbiology Society','Oxford : IRL Press for the Society for General Microbiology ',1987,1852210214,5),
('Chemical engineering','Chemical process control : an introduction to theory and practice','G Stephanopoulos','Englewood Cliffs ; London : Prentice-Hall ',1984,0131286293,5),
('Chemical engineering','Project cost control in action','O. P Kharbanda ; E. A Stallworthy; L. F Williams','Farnborough, Hants. : Gower',1987,0291397425,5),
('Chemical engineering','Process development : physicochemical concepts','ohn H Atherton ; K. J Carpenter','Oxford ; New York : Oxford University',1999,9780198503729,5),
('Chemical engineering','Quality assurance and quality control in the analytical chemical laboratory : a practical approach','Piotr Konieczka author. ; Jacek Namiesnik author','Boca Raton : CRC ',2018,9781138196728,5),
('Chemical engineering','Molecular biotechnology : principles and applications of recombinant DNA','Bernard R Glick ; Jack J Pasternak; Cheryl L Patten','Washington, D.C. : ASM',2010,9781555814984,5),
('Chemical engineering','Chemical engineering: the essential reference','Theodore, Louis','New York: McGraw-Hill',2014,9780071831314,5),
('Chemical engineering','A Dictionary of Chemical Engineering','Schaschke, Carl','Oxford: Oxford University ',2014,9780199651450,5),
('Chemical engineering','Compound Histories: Materials, Governance and Production, 1760-1840','Simon Werrett ; Lissa L. Roberts','BRILL 2018',2018, 9004325565,5),
('Chemical engineering','Nanoparticle Engineering for Chemical-Mechanical Planarization: Fabrication of Next-Generation Nanodevices','Paik, Ungyu ; Park, Jea-Gun','CRC',2016,9781420059113,5),
('Chemical engineering','MATLAB numerical methods with chemical engineering applications','Al-Malah, Kamal I. M','New York: McGraw-Hill',2013, 9780071831284,5),
('Chemical engineering','Membrane and Membrane Reactors Operations in Chemical Engineering','Iulianelli, Adolfo','MDPI ',2019,9783039210220,5),
('Chemical engineering','Flowing Matter','Toschi, Federico ; Sega, Marcello','Cham: Springer International ',2019,9783030233693,5),
('Biomolecular engineering','Principles of cellular engineering understanding the biomolecular interface','Michael R. King ','Amsterdam ; Boston : Elsevier Academic',2006,9786611186586,5),
('Biomolecular engineering','Electrochemistry of dihydroxybenzene compounds : carbon based electrodes and their uses in synthesis and sensors','Hanieh Ghadimi author. ; Sulaiman Ab Ghani author','Oxford : Elsevier',2017,' 0-12-813408-9',5),
('Biomolecular engineering','Systems bioinformatics an engineering case-based approach','Gil Alterovitz; Marco F Ramoni','Norwood, MA : Artech House',2007,'1-59693-125-6',5),
('Biomolecular engineering','Molecular recognition biotechnology, chemical engineering and materials applications','Jason A McEvoy','New York : Nova Science Publishers',2011,'1-61209-478-3',5),
('Biomolecular engineering','Handbook of nanoscience, engineering, and technology','William A. Goddard','Boca Raton ',2012,1-315-21717-1,5),
('Biomolecular engineering','Handbook of nanoscience, engineering, and technology','William A. Goddard ','Boca Raton : CRC ',2012,1-315-21717-1,5),
('Biomolecular engineering','Natural product biosynthesis : chemical logic and enzymatic machinery','Christopher Walsh author. ; Yi Tang author.; Royal Society of Chemistry (Great Britain), publisher.','London, UK : Royal Society of Chemistry ',2017, 9781788010764,5),
('Agriculture','Laboratory methods for work with plant and soil nematodes','J. F SOUTHEY ; Great Britain. Ministry of Agriculture, Fisheries and Food','London : H.M.S.O',1986, 0112427545,5),
('Agriculture','Laboratory methods for work with plant and soil nematodes','J. F SOUTHEY ; Great Britain. Ministry of Agriculture','London : H.M.S.O',1986,0112427545,5),
('Agriculture','British poisonous plants','A. A Forsyth ; Great Britain. Ministry of Agriculture, Fisheries and Food; Great Britain. Ministry of Agriculture and Fisheries; Great Britain. Ministry of Food; Great Britain','Department for Environment, Food & Rural Affairs',1968,'N/A',5),
('Agriculture','Bibliography of food consumption surveys','F.A.O','F.A.O',1987,9251029237,5),
('Agriculture','The United States Department of Agriculture yearbook','United States. Department of Agriculture','Washington, D.C. : United States Department of Agriculture : For sale by the Supt. of Docs., U.S',1979,1933-4303,5),
('Agriculture','Agriculture: a partnership between Europe and farmers','N/A','Luxembourg: Publications Office',2017,9789279595929,5),
('Agriculture','Investing in agriculture for a better future','Food and Agriculture Organization of the United Nations','Rome : Food And Agriculture Organization Of The United Nations',2012,'92-5-107317-1',5),
('Biology','Biology','Research & Education Association Content Provider','Piscataway, New Jersey : Research & Education Association',2014,'0-7386-8405-8',5),
('Biology','Environmental Microbiology','Pepper, Ian L ; Gerba, Charles P ; Gentry, Terry J ; Maier, Raina M','San Diego: Elsevier Science & Technology',2011,9780123705198,5),
('Biology','Cell Biology','Pollard, Thomas ; Earnshaw, William ; Lippincott-Schwartz, Jennifer ; Johnson, Graham','Elsevier Health Sciences',2017,0323341268,5),
('Biology','Molecular biology','Pazdernik, Nanette J ; McGehee, Michelle R ; Clark, David P','Academic ',2018,9780128132883,5),
('Biology','Oceanography and Marine Biology: An Annual Review','Allcock, A.L ; Firth, L.B ; Hawkins, S.J ; Bates, A.E ; Swearer, S.E ; Todd, P.A ; Smith, I.P','CRC ',2019,9780367134150,5),
('Biology','Oceanography and Marine Biology','Hawkins, S. J ; Allcock, A. L ; Bates, A. E ; Firth, L. B ; Smith, I. P ; Swearer, S. E ; Todd, P. A','Taylor & Francis',2019,9780429026379,5),
('Biology','Systems Biology','Robert A Meyers ; Meyers, Robert A Contributor','Hoboken : Wiley',2012,'3-527-66859-4',5),
('Biology','Introduction to a submolecular biology','Albert Szent-Györgyi','New York : Academic',1960,'0-323-16101-4',5),
('Biology','Methods in cell biology','David M Prescott; American Society for Cell Biology','Academic Press',1999,' 0091-679x',5),
('Biology','Biochemistry and molecular biology compendium','Roger L Lundblad','Boca Raton, FL ; London : CRC',2007,9781420043471,5),
('Physics','Physics','James S. Walker','Upper Saddle River : Pearson Fifth edition',2017,'9780321976444',5),
('Physics','Turning points in physics : a series of lectures given at Oxford University in Trinity term','R. J Blin-Stoyle (Roger John), author.; A. C. Crombie author of introduction, etc.; University of Oxford, originator','Amsterdam, Netherlands : North-Holland Publishing Company',1959,'1-4832-2139-3',5),
('Physics','The big ideas in physics and how to teach them : teaching physics','Ben Rogers (Physics writer)','Abingdon, Oxon ; New York, NY : Routledge',2018,9781138235069 ,5),
('Physics','Understanding physics','David C. Cassidy 1945- author. ; Gerald James Holton author.; F. James Rutherford (Floyd James)','New York : Springer',2013,9781475777000,5),
('Physics','Sears and Zemanskys university physics : with modern physics','Hugh D. Young author. ; Roger A. Freedman author.; A. Lewis Ford (Albert Lewis), contributor','Harlow : Pearson',2016,9781292118604,5),
('Physics','Physics with answers : 500 problems and solutions','A. R King ; O Regev','Cambridge : Cambridge University Press ',1997,0521483697,5),
('Physics','Advancing physics : teachers pack','Jon Ogborn; Mary Whitehouse; Institute of Physics','Institute of Physics ',2008,9780750307796,5),
('Physics','Astrophysics processes : the physics of astronomical phenomena','Hale Bradt ','Cambridge, UK ; New York : Cambridge University Press',2008, 9780521846561,5),
('Physics','Astrophysics','C Bishop ; Institute of Physics','London : John Murray',2000,0719585902,5),
('Physics','The physics of stars','A. C Phillips','Wiley',1999,0471987972,5),
('Physics','Particle Physics Reference Library','Myers, Stephen ; Schopper, Herwig','Springer Nature',2020,9783030342456,5),
('Chemistry','Chemistry','Keith B Hutton','Abingdon, Oxon : Helicon',2006,9786610759514,5),
('Chemistry','Chemistry','Rob Lewis 1954- ; Wynne Evans; MyiLibrary','Basingstoke England ; New York : Palgrave Macmillan 3rd ed',2006,9786610860807,5),
('Chemistry','Intermolecular and surface forces','Israelachvili, Jacob N','Academic Press ',2014,9780123919274,5),
('Chemistry','Colloid Chemistry','José Luis Toca-Herrera ; Clemens K. Weiss','MDPI - Multidisciplinary Digital Publishing Institute',2014,9783038974598,5),
('Chemistry','Compound Histories: Materials, Governance and Production, 1760-1840','Simon Werrett ; Lissa L. Roberts','BRILL',2018,9004325565,5),
('Chemistry','Chemistry: A Very Short Introduction','Atkins, Peter','Oxford: Oxford University Press ',2015,9780199683970,5),
('Chemistry','Coordination Chemistry of Silicon','Inoue, Shigeyoshi','MDPI - Multidisciplinary Digital Publishing Institute',2019,9783038976387,5),
('Chemistry','The Physics and Chemistry of the Interstellar Medium','Tielens, A. G. G. M','Cambridge: Cambridge University Press ',2005,9780521533720,5),
('Chemistry','Organic chemistry: structure, mechanism, synthesis','Ouellette, Robert J ; Rawn, J. David','Academic Press',2018,9780128128381,5),
('Chemistry','Carbohydrate chemistry','Lopez, J. Cristobal ; Queneau, Yves ; Murphy, Paul ; Bernardi, Anna ; Galan, Carmen','Royal Society of Chemistry',2015,9781782621218,5),
('Chemistry','Organometallic chemistry, volume 40','Fairlamb, I ; Fairlamb, I ; Lynam, J','Cambridge: NBN International',2015,9781849739849,5),
('Chemistry','100 years of physical chemistry','Royal Society of Chemistry (Great Britain)','Cambridge : Royal Society of Chemistry ',2004,'1-84755-000-2',5),
('Chemistry','Annual reports in medicinal chemistry. Volume 7','American Chemical Society. Division of Medicinal Chemistry','New York ; London : Academic Press',1972, 9786611739751,5),
('Chemistry','Advances in inorganic chemistry. Volume 37','A. G Sykes','San Diego ; London : Academic Press',1992,9786611727611,5),
('Chemistry','Advances in inorganic chemistry. Volume 36','A. G Sykes (A. Geoffrey)','San Diego : Academic Press',1991,9786611727604,5),
('Chemistry','Chemistry','Steven S. Zumdahl author. ; Susan A. Zumdahl author.; Donald J. DeCoste author.; Gretchen M. Adams consultant, contributor','Boston, MA, USA : Cengage Learning Tenth edition.; Student edition',2018,9781305957404,5),
('Chemistry','Chemistry','Ann Fullick ; Patrick Fullick','Oxford : Heinemann 2nd ed',2000,'043557096X',5),
('Chemistry','Chemistry','Lawrie Ryan','Cheltenham : Nelson Thornes',2002,0748766944,5),
('Chemistry','Leas chemistry of cement and concrete','F. M Lea (Frederick Measham), 1900-; P. C Hewlett','Oxford : Elsevier Butterworth-Heinemann 4th ed. / edited by Peter C. Hewlett',2004,9780080535418 ,5),
('Chemistry','Technical sourcebook for apparel designers','Jaeil Lee author. ; Camille Steen author','New York : Fairchild Books Third edition',2019,9781501328404,5),
('Chemistry','Solutions manual to accompany Inorganic chemistry, seventh edition, Martin Weller','Alen Hadzovic author. ; Martin Weller Dr.','Oxford : Oxford University Press',2018,9780198814689 ,5),
('Chemistry','Inorganic chemistry : Solutions Manual','Catherine E. Housecroft ','Harlow, England : Pearson Fifth edition',2018, 9781292139913,5),
('Chemistry','Chemistry for today : general, organic, and biochemistry','Spencer L. Seager author. ; Michael R. Slabaugh 1943- author.; Maren S. Hansen author','Boston, MA, USA : Cengage Learning Ninth edition.; Student edition',2018,9781305960060,5),
('Chemistry','Pharmaceutical formulation','Geoffrey D. Tovey editor','Cambridge : Royal Society of Chemistry',2018,9781849739412,5),
('Chemistry','Quality assurance and quality control in the analytical chemical laboratory : a practical approach','Piotr Konieczka author. ; Jacek Namiesnik author','Boca Raton : CRC Press',2009, 9781138196728,5),
('Chemistry','Engineering health : how biotechnology changed medicine','Lara V. Marks editor.; Royal Society of Chemistry (Great Britain), issuing body','London : The Royal Society of Chemistry',2018, 9781782620846,5),
('Computer Science','International Symposium on Mathematics, Quantum Theory, and Cryptography Proceedings of MQC 2019','Tsuyoshi Takagi editor.; Masato Wakayama; Keisuke Tanaka; Noboru Kunihiro; Kazufumi Kimoto; Yasuhiko Ikematsu','Singapore : Springer Singapore : Imprint: Springer',2021,'981-15-5191-X',5),
('Computer Science','Produktivitätsmanagement 4.0 Praxiserprobte Vorgehensweisen zur Nutzung der Digitalisierung in der Industrie','Tim Jeske editor.; Frank Lennings','Berlin, Heidelberg : Springer Berlin Heidelberg : Imprint: Springer Vieweg',2021,' 3-662-61584-3',5),
('Computer Science','Data Privacy and Trust in Cloud Computing Building trust in the cloud through assurance and accountability','Theo Lynn editor.; John G Mooney; Lisa van der Werff; Grace Fox','Cham : Springer International Publishing : Imprint: Palgrave Macmillan',2021,'3-030-54660-8',5),
('Computer Science','Machine Learning for Cyber Physical Systems Selected papers from the International Conference ML4CPS 2020','Jürgen Beyerer editor.; Alexander Maier; Oliver Niggemann','Berlin, Heidelberg : Springer Berlin Heidelberg : Imprint: Springer Vieweg',2021,' 3-662-62746-9',5),
('Computer Science','A Journey of Embedded and Cyber-Physical Systems Essays Dedicated to Peter Marwedel on the Occasion of His 70th Birthday','Jian-Jia Chen editor','Cham : Springer International Publishing : Imprint: Springer',2021,'3-030-47487-9',5),
('Computer Science','Internal Crowdsourcing in Companies Theoretical Foundations and Practical Applications','Hannah Ulbrich editor.; Marco Wedel; Hans-Liudger Dienel','Cham : Springer International Publishing : Imprint: Springer',2021,'3-030-52881-2',5),
('Computer Science','Multiscale Biomechanics and Tribology of Inorganic and Organic Systems In memory of Professor Sergey Psakhie','Georg-Peter Ostermeyer editor.; Valentin L Popov; Evgeny V Shilko; Olga S Vasiljeva','Cham : Springer International Publishing : Imprint: Springer',2021,'3-030-60124-2',5),
('Computer Science','Coding and Cryptography 2019','Canteaut, Anne ; Kyureghyan, Gohar M ; Pott, Alexander ; Ulmer, Félix Springer Verlag','Designs, Codes and Cryptography',2020,'0925-1022',5),
('Computer Science','The Political Economy of Bank Regulation in Developing Countries: Risk and Reputation','Jones, Emily','Oxford: Oxford University Press',2020,9780198841999,5),
('Computer Science','It began with Babbage : the genesis of computer science','Subrata Dasgupta','New York, NY : Oxford University Press',2020,'0-19-930942-6',5),
('Computer Science','Educational technology - Special Issue of ERCIM News','Katsouros, Vassilis ; Hachet, Martin','ERCIM',2020,'0926-4981',5),
('Computer Science','Programming Persistent Memory : A Comprehensive Guide for Developers','Scargall, Steve','Apress',2020,9781484249321,5),
('Computer Science','It began with Babbage : the genesis of computer science','Subrata Dasgupta author','New York, NY : Oxford University Press ',2020,'0-19-930942-6',5),
('Computer Science','Digitized : the science of computers and how it shapes our world','Peter Bentley ','Oxford : Oxford University Press',2020,9786613624475,5)

;
--index for isbn
ALTER TABLE `addbook` ADD INDEX( `isbn`);
--index for title and sub_cat
ALTER TABLE `addbook` ADD INDEX( `sub_cat`, `title`);

--above indexing run in addbook table



CREATE TABLE book_issue (
    id int NOT NULL AUTO_INCREMENT,
    
    isbn varchar(30),
    student_id varchar(10)
);

--index for book_issue 
ALTER TABLE `book_issue` ADD INDEX( `isbn`);


CREATE TABLE fines (
    id int NOT NULL AUTO_INCREMENT,
    student_id varchar(10),
    isbn varchar(30),
    payment int(20)
    
);

--index for fines table
ALTER TABLE `fines` ADD INDEX( `isbn`);


CREATE TABLE studentlog (
    id int NOT NULL AUTO_INCREMENT,
    name varchar(30),
    email varchar(50),
    password varchar(50),
    img varchar(50),
    student_id int(20)
    
);


CREATE TABLE waitlist (
    id int NOT NULL AUTO_INCREMENT,
    student_id varchar(10),
    title varchar(50),
    sub_cat varchar(20),
    publisher varchar(50)
    
);

CREATE TABLE wishlist (
    id int NOT NULL AUTO_INCREMENT,
    student_id varchar(10),
    title varchar(50),
    publisher varchar(50),
    sub_cat varchar(50)
    
);







